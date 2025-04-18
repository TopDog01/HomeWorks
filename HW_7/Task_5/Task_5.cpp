#include <iostream>

int main() {
    for (int y = 0; y <= 20; y++) { // Изменяем порядок, чтобы y был первым
        for (int x = 0; x <= 50; x++) {
            if (x == 25 && y == 10) // Точка пересечения
                std::cout << "+";
            else if (y == 10) // Горизонтальная ось
                std::cout << "-";
            else if (x == 25) // Вертикальная ось
                std::cout << "|";
            else if (x == 50 && y == 10) // Стрелка вправо
                std::cout << ">";
            else if (x == 25 && y == 0) // Стрелка вверх
                std::cout << "^";
            else
                std::cout << " ";
        }
        std::cout << "\n";
    }
    return 0;
}