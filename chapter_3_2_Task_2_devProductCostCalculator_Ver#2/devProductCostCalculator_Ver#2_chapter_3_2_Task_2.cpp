// Калькулятор для расчёта полной стоимости товара с учётом текущих скидок и доставки до вашего района.
// Version#2

#include <iostream>

int main()
{
    int costProductWiFiRouter;
    int costDeliveryProduct;
    int sailProductPercentForInter;
    int fullCostProduct;
    //...
    setlocale(LC_ALL, "Russian");
    std::cout << "||============================================================================================================||\n";
    std::cout << "|| " << "Калькулятор для расчёта полной стоимости товара с учётом текущих скидок и доставки до вашего района. Version#2\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Информация о товаре:\n";
    std::cout << "|| " << "Выберите Товар: " << "WiFi Роутер\n";
    std::cout << "|| " << "Введите стоимость товара (р.): ";
    std::cin >> costProductWiFiRouter;
    std::cout << "|| " << "Введите скидку на данный товар (в процентах, кратную 10): ";
    std::cin >> sailProductPercentForInter;
    std::cout << "|| " << "Выберите магазин: " << "WOLF Technic. " << "г.Нунайск, ул.Питейная д.1" << "\n";
    std::cout << "|| " << "Введите стоимость доставки в ваш район (р.): ";
    std::cin >> costDeliveryProduct;
    std::cout << "|| " << "\n";
    fullCostProduct = costProductWiFiRouter + costDeliveryProduct - costProductWiFiRouter * 1 / sailProductPercentForInter;
    std::cout << "|| " << "Полная стоимость товара с учётом доставки и текущих скидок равна (р.): " << fullCostProduct << " Руб." << "\n";
    std::cout << "||============================================================================================================||\n";
}
