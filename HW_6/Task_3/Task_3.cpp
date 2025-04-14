#include <iostream>
#include <string>
#include <limits> 

int main() {
    setlocale(LC_ALL, "Russian");

    std::string debtorName;
    double debtAmount;

    
    std::cout << "Введите имя должника: ";
    std::getline(std::cin, debtorName);

    
    std::cout << "Введите сумму долга: ";
    while (!(std::cin >> debtAmount) || debtAmount < 0) {
        std::cout << "Ошибка: введите положительное число для суммы долга." << std::endl;
        std::cout << "Введите сумму долга: ";
        std::cin.clear(); /
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }

    double payment = 0.0;

    while (debtAmount > 0) {
        std::cout << "Введите сумму для погашения долга: ";
        while (!(std::cin >> payment) || payment < 0) {
            std::cout << "Ошибка: введите положительное число для суммы погашения." << std::endl;
            std::cout << "Введите сумму для погашения долга: ";
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

        if (payment < debtAmount) {
            debtAmount -= payment;
            std::cout << "Долг уменьшен. Остаток долга: " << debtAmount << std::endl;
        }
        else if (payment == debtAmount) {
            debtAmount = 0;
            std::cout << "Долг погашен полностью. Спасибо, " << debtorName << "!" << std::endl;
        }
        else {
            double excess = payment - debtAmount;
            debtAmount = 0;
            std::cout << "Долг погашен полностью. Остаток на счету: " << excess << std::endl;
        }
    }

    return 0;
}



    /*1. Программа запрашивает имя должника и сумму долга.Для суммы долга реализован контроль ввода, чтобы она была положительной.
    2. Ввод суммы для погашения долга происходит в цикле while, который продолжается до тех пор, пока долг не будет погашен.
    3. Если введенная сумма меньше долга, программа уменьшает долг и выводит оставшуюся сумму.
    4. Если введенная сумма равна долгу, долг погашается полностью, и программа выводит соответствующее сообщение.
    5. Если введенная сумма больше долга, программа погашает долг и сообщает о остатке на счету.
    6. Ввод контролируется на корректность, и в случае ошибки пользователю предлагается ввести данные заново.*/