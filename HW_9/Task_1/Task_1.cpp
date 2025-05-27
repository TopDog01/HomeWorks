#include <iostream>
#include <string>

int main() {
    std::string departureTime, arrivalTime;

    std::cout << "Enter departure time (HH:MM): ";
    std::getline(std::cin, departureTime);

    // Проверка формата времени
    if (departureTime.length() != 5 || departureTime[2] != ':' ||
        !isdigit(departureTime[0]) || !isdigit(departureTime[1]) ||
        !isdigit(departureTime[3]) || !isdigit(departureTime[4])) {
        std::cout << "Invalid input. Please use HH:MM format." << std::endl;
        return 1; // Выход с ошибкой
    }

    std::cout << "Enter arrival time (HH:MM): ";
    std::getline(std::cin, arrivalTime);

    // Проверка формата времени
    if (arrivalTime.length() != 5 || arrivalTime[2] != ':' ||
        !isdigit(arrivalTime[0]) || !isdigit(arrivalTime[1]) ||
        !isdigit(arrivalTime[3]) || !isdigit(arrivalTime[4])) {
        std::cout << "Invalid input. Please use HH:MM format." << std::endl;
        return 1; // Выход с ошибкой
    }

    int depHours = std::stoi(departureTime.substr(0, 2));
    int depMinutes = std::stoi(departureTime.substr(3, 2));
    int arrHours = std::stoi(arrivalTime.substr(0, 2));
    int arrMinutes = std::stoi(arrivalTime.substr(3, 2));

    int departureTimeInMinutes = depHours * 60 + depMinutes;
    int arrivalTimeInMinutes = arrHours * 60 + arrMinutes;

    // Добавляем 24 часа, если время прибытия меньше времени отправления
    if (arrivalTimeInMinutes < departureTimeInMinutes) {
        arrivalTimeInMinutes += 24 * 60;
    }

    int duration = arrivalTimeInMinutes - departureTimeInMinutes;
    std::cout << "The journey lasted " << duration / 60 << " hr. " << duration % 60 << " min." << std::endl;

    return 0;
}