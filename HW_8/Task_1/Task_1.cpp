#include <iostream>
#include <cmath>

int main() {

    setlocale(LC_ALL, "Russian");

    float F, m, t;

    // Ввод силы тяги
    std::cout << "Введите силу тяги F (в ньютонах): ";
    std::cin >> F;

    // Ввод массы
    std::cout << "Введите массу m (в килограммах): ";
    std::cin >> m;

    // Ввод времени
    std::cout << "Введите время t (в секундах): ";
    std::cin >> t;

    // Расчет ускорения
    float a = F / m;

    // Расчет пройденного расстояния по формуле: s = 0.5 * a * t^2
    float s = 0.5f * a * std::pow(t, 2);

    // Вывод результата
    std::cout << "Космический корабль пройдёт расстояние: " << s << " метров за " << t << " секунд." << std::endl;

    return 0;
}