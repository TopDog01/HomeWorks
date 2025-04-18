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