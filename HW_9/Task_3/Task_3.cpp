#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input); // Считываем всю строку, включая пробелы


    int wordCount = 0; // Переменная для подсчета количества слов
    std::istringstream iss(input); // Используем istringstream для разбора ввода

    // Используем цикл for для извлечения слов
    for (std::string word; iss >> word; ++wordCount) {
        // Цикл будет продолжаться для каждого найденного слова
    }

    std::cout << "Answer: " << wordCount << std::endl; 

    return 0;
}