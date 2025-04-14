#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");

    std::string ticketNumber;

    
    std::cout << "Введите номер билета: ";
    std::cin >> ticketNumber;

    
    if (ticketNumber.length() != 6) {
        std::cout << "Ошибка: номер билета должен содержать 6 цифр." << std::endl;
        return 1; 
    }

    int sumFirstHalf = 0;
    int sumSecondHalf = 0;

    
    for (int i = 0; i < 3; ++i) {
        sumFirstHalf += ticketNumber[i] - '0'; 
        sumSecondHalf += ticketNumber[i + 3] - '0'; 
    }

    
    if (sumFirstHalf == sumSecondHalf) {
        std::cout << "Билет счастливый!" << std::endl;
    }
    else {
        std::cout << "Повезёт в следующий раз!" << std::endl;
    }

    return 0;
}


//
//1. Программа запрашивает у пользователя ввод шестизначного номера билета.
//2. Проверяется, что длина введенного номера составляет 6 символов.
//Если нет, программа выводит сообщение об ошибке и завершает выполнение.
//3. Используется цикл for, чтобы пройти по первым трем и последним трем цифрам номера билета.
//Каждая цифра преобразуется из символа в целое число с помощью выражения ticketNumber[i] - '0'.
//4. Суммы первых трех и последних трех цифр сравниваются.
//5. В зависимости от результата сравнения программа выводит, счастливый ли билет.