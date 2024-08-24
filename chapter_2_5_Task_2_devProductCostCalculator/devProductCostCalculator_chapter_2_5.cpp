// Калькулятор для расчёта полной стоимости товара с учётом текущих скидок и доставки до вашего района.

#include <iostream>

int main()
{
    int costProductWiFiRouter = 1500;
    int costDeliveryProduct = 500;
    // Скидка в частях выражается дробью.
    // int sailProduct = costProductWiFiRouter * (1 / 10);
    // Убираем скобки ,так как "int".
    int sailProduct = costProductWiFiRouter * 1 / 10;
    int fullCostProduct = costProductWiFiRouter + costDeliveryProduct - sailProduct;
    //...
    setlocale(LC_ALL, "Russian");
    std::cout << "||============================================================================================================||\n";
    std::cout << "|| " << "Калькулятор для расчёта полной стоимости товара с учётом текущих скидок и доставки до вашего района.\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Информация о товаре:\n";
    std::cout << "|| " << "Выберите Товар: " << "WiFi Роутер\n";
    std::cout << "|| " << "Стоимость товара (р.): " << costProductWiFiRouter << "\n";
    std::cout << "|| " << "Текущая скидка на данный товар (р.): " << sailProduct << "\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Выберите магазин: " << "WOLF Technic. " << "г.Нунайск, ул.Питейная д.1" << "\n";
    std::cout << "|| " << "Стоимость доставки в ваш район (р.): " << costDeliveryProduct << "\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Полная стоимость товара с учётом доставки и текущих скидок равна (р.): " << fullCostProduct << "\n";
    std::cout << "||============================================================================================================||\n";
}
