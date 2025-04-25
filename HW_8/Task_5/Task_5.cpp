#include <iostream>
#include <cmath>

int main() {

    setlocale(LC_ALL, "Russian");

    int kilometers;
    double total_time_seconds = 0;

    std::cout << "Сколько километров ты сегодня пробежал? ";
    std::cin >> kilometers;

    for (int i = 1; i <= kilometers; ++i) {
        int pace_seconds;
        std::cout << "Темп на километре " << i << " (в секундах): ";
        std::cin >> pace_seconds;
        total_time_seconds += pace_seconds;
    }

    double average_time_seconds = total_time_seconds / kilometers;
    int rounded_seconds = static_cast<int>(std::round(average_time_seconds));
    int minutes = rounded_seconds / 60;
    int seconds = rounded_seconds % 60;

    std::cout << "Твой средний темп за тренировку: " << minutes << " минуты " << seconds << " секунд.\n";

    return 0;
}