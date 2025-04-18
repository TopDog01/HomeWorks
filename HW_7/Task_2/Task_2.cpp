#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");


    int water, milk;
    int americanoCount = 0, latteCount = 0;

    
    std::cout << "Введите количество воды в мл: ";
    std::cin >> water;
    std::cout << "Введите количество молока в мл: ";
    std::cin >> milk;

    
    while (true) {
        int choice;
        std::cout << "Выберите напиток (1 — американо, 2 — латте): ";
        std::cin >> choice;

        
        if (choice == 1) {
            if (water >= 300) {
                water -= 300;
                americanoCount++;
                std::cout << "Ваш напиток готов." << std::endl;
            }
            else {
                std::cout << "Не хватает воды." << std::endl;
            }
        }
        else if (choice == 2) {
            if (water >= 30 && milk >= 270) {
                water -= 30;
                milk -= 270;
                latteCount++;
                std::cout << "Ваш напиток готов." << std::endl;
            }
            else if (water < 30) {
                std::cout << "Не хватает воды." << std::endl;
            }
            else {
                std::cout << "Не хватает молока." << std::endl;
            }
        }
        else {
            std::cout << "Неверный выбор. Пожалуйста, выберите 1 или 2." << std::endl;
            continue; 
        }

        
        if (water < 30 && milk < 270) {
            break; 
        }
    }

    // Отчет о работе кофемашины
    std::cout << "***Отчёт***" << std::endl;
    std::cout << "Ингредиентов осталось:" << std::endl;
    std::cout << "Вода: " << water << " мл" << std::endl;
    std::cout << "Молоко: " << milk << " мл" << std::endl;
    std::cout << "Кружек американо приготовлено: " << americanoCount << std::endl;
    std::cout << "Кружек латте приготовлено: " << latteCount << std::endl;

    return 0;
}
