#include <iostream>
#include <cmath>

int main()
{
    float a, b, c;
    std::cout << "a, b, c:";
    std::cin >> a >> b >> c; // читаем значение c

    if (a == 0) // Проверяем на ноль
    {
        std::cout << "Not a quadratic equation!" << std::endl;
    }
    else
    {
        float discriminant = b * b - 4 * a * c; // исправлена формула дискриминанта

        if (discriminant > 0) // сюда должна вести проверка на больше 0
        {
            float x1 = (-b + std::sqrt(discriminant)) / (2 * a); // исправлено
            float x2 = (-b - std::sqrt(discriminant)) / (2 * a); // исправлено
            std::cout << "Root 1, 2: " << x1 << ", " << x2 << std::endl; // исправлено
        }
        else if (discriminant == 0)
        {
            float x = -b / (2 * a); // исправлено
            std::cout << "Root: " << x << std::endl; // исправлено на x
        }
        else
        {
            std::cout << "Complex scenario is not supported!" << std::endl;
        }
    }
}