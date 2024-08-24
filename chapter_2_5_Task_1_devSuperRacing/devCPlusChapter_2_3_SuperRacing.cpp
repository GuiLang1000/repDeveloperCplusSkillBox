//

#include <iostream>

int main()
{
    int mainRaceLap = 4;
    int equipmentEnginePower = 254;
    int equipmentCarWheels = 93;
    int equipmentSteeringWheel = 49;
    int influenceWeatherWild = 21;
    int influenceWeatherRain = 17;
    int mainInfoCarSpeed = equipmentEnginePower + equipmentCarWheels + equipmentSteeringWheel - influenceWeatherWild - influenceWeatherRain;
    //...
    setlocale(LC_ALL,"Russian");
    std::cout << "================== =\n";
    std::cout << "Супер гонки.Круг: " << mainRaceLap << "\n";
    std::cout << "================== =\n";
    std::cout << "Шумахер(" << mainInfoCarSpeed << ")\n";
    std::cout << "================== =\n";
    std::cout << "Водитель: Шумахер\n";
    std::cout << "Скорость: " << mainInfoCarSpeed << "\n";
    std::cout << "------------------ -\n";
    std::cout << "Оснащение\n";
    std::cout << "Двигатель : +" << equipmentEnginePower << "\n";
    std::cout << "Колеса : +" << equipmentCarWheels << "\n";
    std::cout << "Руль : +" << equipmentSteeringWheel << "\n";
    std::cout << "------------------ -\n";
    std::cout << "Действия плохой погоды\n";
    std::cout << "Ветер : -" << influenceWeatherWild << "\n";
    std::cout << "Дождь : -" << influenceWeatherRain << "\n";
}
