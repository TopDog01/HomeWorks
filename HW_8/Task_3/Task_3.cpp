#include <iostream>
#include <cmath>

int main() {

    setlocale(LC_ALL, "Russian");

    float x, y, z;

    // Ввод размеров бруска
    std::cout << "Введите размеры бруска:\n";
    std::cout << "X: ";
    std::cin >> x;
    std::cout << "Y: ";
    std::cin >> y;
    std::cout << "Z: ";
    std::cin >> z;

    // Проверка минимальных размеров
    if (x < 5 || y < 5 || z < 5) {
        std::cout << "Размеры бруска слишком малы для изготовления кубиков.\n";
        return 0;
    }

    const float cube_side = 5;

    // Расчет количества кубиков по каждой оси
    int count_x = static_cast<int>(x / cube_side);
    int count_y = static_cast<int>(y / cube_side);
    int count_z = static_cast<int>(z / cube_side);

    // Общее количество кубиков
    int total_cubes = count_x * count_y * count_z;

    std::cout << "Из этого бруска можно изготовить " << total_cubes << " кубиков.\n";

    // Проверка, достаточен ли их объем для набора
    if (total_cubes >= 8) {
        // Максимальное число кубиков — все возможные
        int max_set_size = total_cubes;
        std::cout << "Из них можно составить набор из " << max_set_size << " кубиков.\n";
    }
    else {
        std::cout << "Недостаточно кубиков для набора.\n";
    }

    return 0;
}