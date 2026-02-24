#include <iostream>
using namespace std;

int main()
{
    int training;
    int time;
    cout << "Сколько было тренировок? ";
    cin >> training;
    cout << "Сколько длились? ";
    cin >> time;

    if (training * time >= 300)
    {
        cout << "Отличный объем!" << endl;
        cout << "Это " << int ((training * time) / 60) << " ч. " << ((training * time) % 60) << " мин." << endl;

    } else {
        cout << "Неплохо, но можно добавить!" << endl;
        cout << "Это " << int ((training * time) / 60) << " ч. " << ((training * time) % 60) << " мин." << endl;
    }

}