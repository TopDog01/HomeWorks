#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    const int initialBuckwheat = 100; 
    const int consumptionPerMonth = 4; 

    std::cout << "Всего гречки было на начало подсчёта: " << initialBuckwheat << " кг" << std::endl;

    
    for (int month = 1; initialBuckwheat - month * consumptionPerMonth >= 0; month++) {
        int remainingBuckwheat = initialBuckwheat - month * consumptionPerMonth;
        std::cout << "После " << month << " месяца у вас в запасе останется " << remainingBuckwheat << " кг гречки" << std::endl;
    }

    std::cout << "После " << (initialBuckwheat / consumptionPerMonth) << " месяца гречка закончится" << std::endl;

    return 0;
}







//1.Программа задает начальное количество гречки(initialBuckwheat) и расход гречки в месяц(consumptionPerMonth).
//2.Выводит начальное количество гречки.
//3.Использует цикл for, который выполняется, пока остаток гречки не станет отрицательным.В каждой итерации цикла :
//4.Вычисляется оставшееся количество гречки.
//5.Выводится сообщение о том, сколько гречки осталось после каждого месяца.
//6.После завершения цикла программа выводит сообщение о том, что гречка закончится после определенного количества месяцев.