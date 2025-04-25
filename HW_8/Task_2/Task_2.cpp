#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");

    float health, resistance, power;

    // Ввод здоровья
    std::cout << "Введите здоровье орка (от 0 до 1): ";
    std::cin >> health;

    // Ввод сопротивляемости магии
    std::cout << "Введите сопротивляемость магии (от 0 до 1): ";
    std::cin >> resistance;

    // Пока орк жив
    while (health > 0) {
        // Ввод мощности удара
        std::cout << "Введите мощность огненного шара (от 0 до 1): ";
        std::cin >> power;

        // Расчет урона с учетом сопротивляемости
        float damage = power * (1 - resistance);

        // Нанесение урона
        health -= damage;
        if (health < 0) health = 0;

        // Выводим урон и оставшееся здоровье
        std::cout << "Урон: " << damage << ", Осталось здоровья: " << health << std::endl;
    }

    std::cout << "Орк погиб." << std::endl;

    return 0;
}