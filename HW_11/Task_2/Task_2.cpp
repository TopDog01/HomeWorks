#include <iostream>
#include <string>

bool is_valid_character(char c, bool is_local) {
    
    std::string local_valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-!#$%&'*+-/=?^_`{|}~";
    
    std::string domain_valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-.";

    if (is_local)
        return local_valid_chars.find(c) != std::string::npos;
    else
        return domain_valid_chars.find(c) != std::string::npos;
}

std::string get_local_part(const std::string& email) {
    std::string local_part;
    for (char c : email) {
        if (c == '@')
            break;
        local_part += c;
    }
    return local_part;
}

std::string get_domain_part(const std::string& email) {
    std::string domain_part;
    bool after_at = false;

    for (char c : email) {
        if (c == '@') {
            after_at = true;
            continue;
        }
        if (after_at)
            domain_part += c;
    }
    return domain_part;
}

bool is_valid_email(const std::string& email) {
    size_t at_pos = email.find('@');

    /
    if (at_pos == std::string::npos || email.find('@', at_pos + 1) != std::string::npos)
        return false;

    
    std::string local_part = get_local_part(email);
    std::string domain_part = get_domain_part(email);

    
    if (local_part.length() < 1 || local_part.length() > 64 || domain_part.length() < 1 || domain_part.length() > 63)
        return false;

    
    for (size_t i = 0; i < local_part.length(); i++) {
        if (!is_valid_character(local_part[i], true))
            return false;

        
        if (i > 0 && local_part[i] == '.' && local_part[i - 1] == '.')
            return false;
        if (i == 0 && local_part[i] == '.')
            return false;
        if (i == local_part.length() - 1 && local_part[i] == '.')
            return false;
    }

    
    for (size_t i = 0; i < domain_part.length(); i++) {
        if (!is_valid_character(domain_part[i], false))
            return false;

        
        if (i > 0 && domain_part[i] == '.' && domain_part[i - 1] == '.')
            return false;
        if (i == 0 && domain_part[i] == '.')
            return false;
        if (i == domain_part.length() - 1 && domain_part[i] == '.')
            return false;
    }

    return true;
}

int main() {
    std::string email;

    std::cout << "Enter an email address: ";
    std::getline(std::cin, email);

    if (is_valid_email(email)) {
        std::cout << "Yes" << std::endl;  
    }
    else {
        std::cout << "No" << std::endl;   
    }

    return 0;
}