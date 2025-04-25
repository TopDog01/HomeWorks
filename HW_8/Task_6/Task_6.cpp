#include <iostream>
#include <cmath>

int main() {

    setlocale(LC_ALL, "Russian");

    double start, end;
    int count = 0;

    std::cout << "Введите начальную амплитуду: ";
    std::cin >> start;
    std::cout << "Введите конечную амплитуду: ";
    std::cin >> end;

    while (start > end) {
        start *= 0.916; // уменьшение амплитуды на 8,4%
        ++count;
    }

    std::cout << "Маятник качнется " << count << " раз(а).\n";

    return 0;
}