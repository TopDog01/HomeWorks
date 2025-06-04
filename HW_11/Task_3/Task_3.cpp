#include <iostream>
#include <string>
#include <sstream>

bool is_valid_octet(const std::string& octet) {
    
    if (octet.length() == 0 || octet.length() > 3 || (octet.length() > 1 && octet[0] == '0'))
        return false;

    
    for (char c : octet) {
        if (c < '0' || c > '9')
            return false;
    }

    
    int value = std::stoi(octet);
    return value >= 0 && value <= 255;
}

std::string get_address_part(const std::string& ip, int part_index) {
    std::string octet;
    int dot_count = 0;

    for (char c : ip) {
        if (c == '.') {
            if (dot_count == part_index) {
                return octet;  
            }
            dot_count++;
            octet.clear();  
        }
        else {
            octet += c;
        }
    }

    if (dot_count == part_index) {
        return octet;  
    }

    return "";  
}

bool is_valid_ip(const std::string& ip) {
    
    if (std::count(ip.begin(), ip.end(), '.') != 3)
        return false;

    for (int i = 0; i < 4; ++i) {
        std::string octet = get_address_part(ip, i);
        if (!is_valid_octet(octet) || (i == 3 && octet.empty())) {
            return false;  
        }
    }

    return true;  
}

int main() {
    std::string ip;

    std::cout << "Enter an IPv4 address: ";
    std::getline(std::cin, ip);

    if (is_valid_ip(ip)) {
        std::cout << "Valid" << std::endl;  
    }
    else {
        std::cout << "Invalid" << std::endl; 
    }

    return 0;
}