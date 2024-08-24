// Программа считает, какое количество клиентов успеет обслужить один кассир за рабочую смену.
// Время на обслуживание клиента складывается из времени, за которое клиент делает заказ, и времени, за которое кассир собирает заказ и выдаёт его клиенту.

#include <iostream>

int main()
{
    int shiftCashierDurationMin = 480;
    int shiftCashierDurationHour = shiftCashierDurationMin / 60;
    int clientAvgOrderingDurationMin = 5;
    int cashierAvgOrderingDurationMin = 7;
    int clientAvgServiceDuration = clientAvgOrderingDurationMin + cashierAvgOrderingDurationMin;
    
    //...
    setlocale(LC_ALL, "Russian");
    std::cout << "||============================================================================================================||\n";
    std::cout << "||\n";
    std::cout << "|| " << "Ресторан <<Крылышки и ножки>>\n";
    std::cout << "|| " << "Расчёт максимального количества клиентов для обслуживания кассиром за смену.\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Информация о смене:\n";
    std::cout << "|| " << "Введите длительность смены (мин.): " << shiftCashierDurationMin << " Минут = " << shiftCashierDurationHour << " Часов." << "\n";
    std::cout << "|| " << "Среднее время клиента на заказ? (мин.): " << clientAvgOrderingDurationMin << " Минут." << "\n";
    std::cout << "|| " << "Среднее время сбора заказа кассиром (мин.): " << cashierAvgOrderingDurationMin << " Минут\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Априорный расчёт:\n";
    std::cout << "|| " << "За смену, длиной " << shiftCashierDurationHour << " часов, кассир успеет обслужить " << clientAvgServiceDuration << " клиентов.\n";
    std::cout << "||============================================================================================================||\n";

}
