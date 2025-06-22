#include <iostream>
#include <string>

int main() {
    const int num_apartments = 10; 
    std::string surnames[num_apartments]; 

    
    std::cout << "Enter 10 surnames of the residents:\n";
    for (int i = 0; i < num_apartments; ++i) {
        std::cout << "Apartment " << (i + 1) << ": ";
        std::getline(std::cin, surnames[i]);
    }

    
    for (int j = 0; j < 3; ++j) {
        int apartment_number; 
        std::cout << "Enter apartment number (from 1 to 10): ";
        std::cin >> apartment_number;

        
        if (apartment_number >= 1 && apartment_number <= 10) {
            std::cout << "Resident in apartment " << apartment_number << ": " << surnames[apartment_number - 1] << std::endl;
        }
        else {
            std::cout << "Invalid apartment number. Please enter a number from 1 to 10." << std::endl;
        }
    }

    return 0;
}