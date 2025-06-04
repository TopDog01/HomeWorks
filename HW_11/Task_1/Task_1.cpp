#include <iostream>
#include <string>

std::string encrypt_caesar(const std::string& text, int shift) {
    std::string encrypted_text;

    for (char c : text) {
        if ('a' <= c && c <= 'z') {  
            char new_char = (c - 'a' + shift) % 26 + 'a';
            encrypted_text += new_char;
        }
        else if ('A' <= c && c <= 'Z') {  
            char new_char = (c - 'A' + shift) % 26 + 'A';
            encrypted_text += new_char;
        }
        else {  
            encrypted_text += c;
        }
    }

    return encrypted_text;
}

int main() {
    std::string input_text;
    int shift;

    
    std::cout << "Enter text to encrypt: ";
    std::getline(std::cin, input_text);

    
    std::cout << "Enter shift value: ";
    std::cin >> shift;

    
    std::string encrypted = encrypt_caesar(input_text, shift);

    
    std::cout << "Encrypted text: " << encrypted << std::endl;

    return 0;
}