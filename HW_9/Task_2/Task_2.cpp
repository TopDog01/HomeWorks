#include <iostream>
#include <string>

bool isValidFloatingPoint(const std::string& s) {
    if (s.empty()) return false; // Пустая строка — некорректная запись

    size_t i = 0;
    bool hasDigits = false;       // Флаг, чтобы проверить наличие цифр
    bool hasPoint = false;        // Флаг, чтобы проверить наличие точки

    // Проверяем первый символ
    if (s[i] == '-' || s[i] == '.') {
        i++; // Пропускаем знак минус или точку
    }
    else if (isdigit(s[i])) {
        hasDigits = true; // Есть цифра
        i++;
    }
    else {
        return false; // Первым символом не может быть другой символ
    }

    // Обрабатываем символы после первого
    for (; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            hasDigits = true; //  Найдена хотя бы одна цифра
        }
        else if (s[i] == '.') {
            if (hasPoint) { // Если точка уже была
                return false; // Две точки — это ошибка
            }
            hasPoint = true; // Устанавливаем флаг, что точка найдена
        }
        else {
            return false; // Неподдерживаемый символ
        }
    }

    // Строка корректна, если есть хотя бы одна цифра
    return hasDigits;
}

int main() {
    std::string input;

    std::cout << "Enter a number: ";
    std::getline(std::cin, input);

    if (isValidFloatingPoint(input)) {
        std::cout << "Yes" << std::endl; 
    }
    else {
        std::cout << "No" << std::endl; 
    }

    return 0;
}