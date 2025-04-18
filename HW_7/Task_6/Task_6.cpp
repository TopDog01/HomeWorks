#include <iostream>
#include <string>

int main() {

    setlocale(LC_ALL, "Russian");

    int totalLength;
    int exclamationCount;

    
    std::cout << "Введите общую длину колонтитула (не менее 3): ";
    std::cin >> totalLength;

    
    while (totalLength < 3) {
        std::cout << "Длина колонтитула должна быть не менее 3. Попробуйте снова: ";
        std::cin >> totalLength;
    }

    
    std::cout << "Введите желаемое количество восклицательных знаков: ";
    std::cin >> exclamationCount;

    
    while (exclamationCount < 0 || exclamationCount > totalLength) {
        std::cout << "Количество восклицательных знаков должно быть от 0 до " << totalLength << ". Попробуйте снова: ";
        std::cin >> exclamationCount;
    }

    
    int totalSpaces = totalLength - exclamationCount;
    int leftSpaces = totalSpaces / 2;
    int rightSpaces = totalSpaces - leftSpaces; 

    
    std::string header(leftSpaces, '~');
    header += std::string(exclamationCount, '!');
    header += std::string(rightSpaces, '~'); 

   
    std::cout << header << std::endl;

    return 0;
}





//1. Ввод данных : Программа запрашивает у пользователя общую длину колонтитула и количество восклицательных знаков.
//2. Контроль ввода : Программа проверяет, что общая длина колонтитула не меньше 3, а количество восклицательных 
//знаков не превышает общую длину и не отрицательно.
//3. Вычисление пробелов : Программа вычисляет количество пробелов, необходимых для центрирования восклицательных знаков.
//4. Формирование строки : Создается строка, состоящая из пробелов, восклицательных знаков и снова пробелов.
//5. Вывод результата : Колонтитул выводится на экран.