// Создание Игрового Эккаунта в "World Of Warcraft" -> blizzard.com
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    //...
    std::string answerYesNo;
    std::string userName;
    std::string userRaceOrcHuman;
    std::string userAccountName;
    std::string characterSpeech = "<<Моя Жизнь принадлежит Орде!!!>>";
    
    //...
    std::cout << "||============================================================================================================||\n";
    std::cout << "||======                                  !!! World Of Warcraft !!!                                     ======||\n";
    std::cout << "||======                                        <<BLIZZARD>>                                            ======||\n";
    std::cout << "||======                                         Version#1.                                             ======||\n";
    std::cout << "||============================================================================================================||\n";
    std::cout << "|| " << "Создать Account? (Введите Да/Нет)";
    std::cin >> answerYesNo;
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Введите Ваше Имя: ";
    std::cin >> userName;
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Доброго Времени Суток в Перекрёстке Миров, Попаданец " << userName << "!\n";
    std::cout << "|| " << "Выберите Расу Вашего персонажа (Введите Орк/Человек): ";
    std::cin >> userRaceOrcHuman;
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Введите Имя Вашего Персонажа: ";
    std::cin >> userAccountName;
    std::cout << "|| " << "\n";
    std::cout << "|| " << userName << ", Вы подтверждаете введённые данные? (Введите Да/Нет)";
    std::cin >> answerYesNo;
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Сводная информация об Игроке:\n";
    std::cout << "||_______________________________________________________________\n";
    std::cout << "|| " << "Имя Игрока: " << userName << "\n";
    std::cout << "|| " << "Раса Игрового Персонажа: " << userRaceOrcHuman << "\n";
    std::cout << "|| " << "Имя игрового персонажа: " << userAccountName << "\n";
    std::cout << "||_______________________________________________________________\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Перемещаемся в Новый Мир ................" << "\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Родился новый " << userRaceOrcHuman << " " << userAccountName << "!\n";
    std::cout << "|| " << "Добро Пожаловать в Этот Суровый Мир, " << userRaceOrcHuman << " " << userAccountName << "!\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << userRaceOrcHuman << " " << userAccountName << " сказал, как отрезал: " << characterSpeech << "!\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "ЗАГРУЗКА................\n";
    std::cout << "||============================================================================================================||\n";
}
