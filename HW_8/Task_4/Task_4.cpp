#include <iostream>
#include <cmath>

int main() {

    setlocale(LC_ALL, "Russian");

    double file_size, speed;
    int seconds_passed = 0;
    double downloaded = 0.0;

    // Ввод размера файла
    std::cout << "Укажите размер файла для скачивания: ";
    while (!(std::cin >> file_size) || file_size <= 0) {
        std::cout << "Некорректный ввод. Пожалуйста, введите положительное число для размера файла: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Ввод скорости соединения
    std::cout << "Какова скорость вашего соединения? ";
    while (!(std::cin >> speed) || speed <= 0) {
        std::cout << "Некорректный ввод. Пожалуйста, введите положительное число для скорости: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Цикл скачивания
    while (downloaded < file_size) {
        seconds_passed++;
        downloaded += speed;
        if (downloaded > file_size) {
            downloaded = file_size; // чтобы не превышать общий размер
        }
        // Вычисляем процент скачанного
        int percent = static_cast<int>((downloaded / file_size) * 100);
        // Выводим прогресс
        std::cout << "Прошло " << seconds_passed << " сек. Скачано "
            << static_cast<int>(downloaded) << " из " << static_cast<int>(file_size)
            << " МБ (" << percent << "%).\n";
    }

    // Вывод времени
    std::cout << "Обновление скачано за " << seconds_passed << " сек.\n";

    return 0;
}