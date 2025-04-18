#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    int height;

    
    std::cout << "Введите высоту треугольника (положительное целое число): ";
    std::cin >> height;

    
    while (height <= 0) {
        std::cout << "Высота должна быть положительным целым числом. Попробуйте снова: ";
        std::cin >> height;
    }

    
    for (int i = 1; i <= height; i++) {
        
        for (int j = 1; j <= height - i; j++) {
            std::cout << " ";
        }
        
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "#";
        }
        
        std::cout << std::endl;
    }

    return 0;
}