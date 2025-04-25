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

    // Размер кубика
    const float cube_size = 5;

    // Количество кубиков по каждой оси
    int count_x = static_cast<int>(x / cube_size);
    int count_y = static_cast<int>(y / cube_size);
    int count_z = static_cast<int>(z / cube_size);

    // Общее количество кубиков
    int total_cubes = count_x * count_y * count_z;

    std::cout << "Из этого бруска можно изготовить " << total_cubes << " кубиков.\n";

    // Проверка, можно ли сделать набор из минимум 8 кубиков
    if (total_cubes >= 8) {
        // Максимальное число кубиков для набора — это все кубики
        int max_set_size = total_cubes;

        // Но нам нужен набор, чтобы можно было сложить куб размером 5x5x5
        // Количество кубиков в таком наборе — квадрат сторон: 2x2x2 = 8 кубиков
        // Максимально возможное число — это все кубики, если они >=8
        int max_possible_set = total_cubes; // так как все кубики - это и есть максимальный набор

        std::cout << "Из них можно составить набор из " << max_possible_set << " кубиков.\n";
    }
    else {
        std::cout << "Недостаточно кубиков для набора.\n";
    }

    return 0;
}