// Task#1 Создание Игрового Эккаунта в "World Of Warcraft" -> blizzard.com
// Task#2 Программа, которая требует ввести логин и пароль, а после выводит сообщение об успешной регистрации.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    //Task#1 and 2
    //...
    std::string answerYesNo;
    std::string userAccountName;
    std::string userPassword;
    std::string userName;
    std::string userRaceOrcHuman;
    std::string userCharacterName;
    std::string characterSpeech = "<<Моя Жизнь принадлежит Орде!!!>>";
    //...
    //...
    std::cout << "||============================================================================================================||\n";
    std::cout << "||======                                  !!! World Of Warcraft !!!                                     ======||\n";
    std::cout << "||======                                        <<BLIZZARD>>                                            ======||\n";
    std::cout << "||======                                         Version#1.                                             ======||\n";
    std::cout << "||============================================================================================================||\n";
    std::cout << "|| " << "Создать Account? (Введите Да/Нет): ";
    std::cin >> answerYesNo;
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Придумайте login учётной записи: ";
    std::cin >> userAccountName;
    std::cout << "|| " << "Придумайте Password: ";
    std::cin >> userPassword;
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Вы успешно Зарегистрировались " << userAccountName << "!\n";
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Ввод игровых данных:\n";
    std::cout << "|| " << "Введите Ваше Имя: ";
    std::cin >> userName;
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Доброго Времени Суток в Перекрёстке Миров, Попаданец " << userName << "!\n";
    std::cout << "|| " << "Выберите Расу Вашего персонажа (Введите Орк/Человек): ";
    std::cin >> userRaceOrcHuman;
    //std::cout << "|| " << "\n";
    std::cout << "|| " << "Введите Имя Вашего Персонажа: ";
    std::cin >> userCharacterName;
    std::cout << "|| " << "\n";
    std::cout << "|| " << userName << ", Вы подтверждаете введённые данные? (Введите Да/Нет): ";
    std::cin >> answerYesNo;
    std::cout << "|| " << "\n";
    std::cout << "|| " << "Сводная информация об Игроке:\n";
    std::cout << "||_______________________________________________________________\n";
    std::cout << "|| " << "Имя Игрока: " << userName << ".\n";
    std::cout << "|| " << "Раса Игрового Персонажа: " << userRaceOrcHuman << ".\n";
    std::cout << "|| " << "Имя игрового персонажа: " << userCharacterName << ".\n";
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

    //...
    }
