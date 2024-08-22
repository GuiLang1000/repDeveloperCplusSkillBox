// devCPlusChapter_2_3_SuperRacing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int mainRaceCircle = 4;
    int mainInfoCarSpeed = 358;
    int equipmentEnginePower = 254;
    int equipmentCarWheels = 93;
    int equipmentCarWheel = 49;
    int influenceWeatherWild = 21;
    int influenceWeatherRain = 17;
    setlocale(LC_ALL,"Russian");
    std::cout << "================== =\n";
    std::cout << "Супер гонки.Круг: " << mainRaceCircle << "\n";
    std::cout << "================== =\n";
    std::cout << "Шумахер(" << mainInfoCarSpeed << ")\n";
    std::cout << "================== =\n";
    std::cout << "Водитель: Шумахер\n";
    std::cout << "Скорость: " << mainInfoCarSpeed << "\n";
    std::cout << "------------------ -\n";
    std::cout << "Оснащение\n";
    std::cout << "Двигатель : +" << equipmentEnginePower << "\n";
    std::cout << "Колеса : +" << equipmentCarWheels << "\n";
    std::cout << "Руль : +" << equipmentCarWheel << "\n";
    std::cout << "------------------ -\n";
    std::cout << "Действия плохой погоды\n";
    std::cout << "Ветер : -" << influenceWeatherWild << "\n";
    std::cout << "Дождь : -" << influenceWeatherRain << "\n";
}
