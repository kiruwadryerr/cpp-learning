#include <iostream>
using namespace std;

int main()
{
    int nowPassangers = 0;
    int totalPassangers = 0;
    int passangers = nowPassangers;
    cout << "Прибываем на остановку «Улица программистов». В салоне пассажиров: " << nowPassangers << endl;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> passangers;
    nowPassangers -= passangers;
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> passangers;
    totalPassangers += passangers;
    nowPassangers += passangers;
    cout << "Отправляемся с остановки «Улица программистов». В салоне пассажиров: " << nowPassangers << endl;

    cout << "-----------Едем---------" << endl;

    cout << "Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: " << nowPassangers << endl;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> passangers;
    nowPassangers -= passangers;
    cout << "Сколько пассажиров вошло на остановке? ";
    cin >> passangers;
    nowPassangers += passangers;
    totalPassangers += passangers;
    cout << "Отправляемся с остановки «Проспект алгоритмов». В салоне пассажиров: " << nowPassangers << endl;

    cout << "-----------Едем---------" << endl;

    cout << "Прибываем на остановку «Бобры-зомби». В салоне пассажиров: " << nowPassangers << endl;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> passangers;
    nowPassangers -= passangers;
    cout << "Сколько пассажиров вошло на остановке? ";
    cin >> passangers;
    nowPassangers += passangers;
    totalPassangers += passangers;
    cout << "Отправляемся с остановки «Бобры-зомби». В салоне пассажиров: " << nowPassangers << endl;
    
    cout << "-----------Едем---------" << endl;

    cout << "Прибываем на остановку «Барни». В салоне пассажиров: " << nowPassangers << endl;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> passangers;
    nowPassangers -= passangers;
    cout << "Конечная остановка!" << endl;

    cout << "----Подсчет----" << endl;

    cout << "Всего заработали: " << totalPassangers * 20 << " рублей." << endl;
    cout << "Зарплата водителя: " << (totalPassangers * 20) / 4 << " рублей." << endl;
    cout << "Расходы на топливо: " << (totalPassangers * 20) / 5 << " рублей." << endl;
    cout << "Налоги: " << (totalPassangers * 20) / 5 << " рублей." << endl;
    cout << "Расходы на ремонт машины: " << (totalPassangers * 20) / 5 << " рублей." << endl;
    cout << "Итого доход: " << (totalPassangers * 20) - (((totalPassangers * 20) / 4 ) + (3 * ((totalPassangers * 20) / 5))) << " рублей." << endl;

}