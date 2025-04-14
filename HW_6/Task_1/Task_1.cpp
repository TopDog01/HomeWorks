#include <iostream>

int main() {
    int hours;
    setlocale(LC_ALL, "Russian");

    
    std::cout << "Введите, который час: ";
    std::cin >> hours;

    
    while (hours < 0 || hours > 23) {
        std::cout << "Ошибка: введите число от 0 до 23." << std::endl;
        std::cout << "Введите, который час: ";
        std::cin >> hours;
    }

    
    for (int i = 0; i < hours; ++i) {
        std::cout << "Ку-ку!" << std::endl;
    }

    return 0;
}