#include <iostream>
#include <string>
using namespace std;

int main()
{
    int height;
    int weight;
    string eyeColor;
    int countHours;
    int countHands;
    int countLegs;

    cout << "Введите вес призывника: ";
    cin >> weight;
    cout << "Введите рост призывника: ";
    cin >> height;
    cout << "Введите кол-во рук и ног призывника: ";
    cin >> countHands >> countLegs;
    cout << "Какое количество часов он налетал? ";
    cin >> countHours;
    cout << "Какой цвет глаз? ";
    cin >> eyeColor;

    if ((weight < 45 || weight > 65) && (height < 145 || height > 165) && (countHands != countLegs) && (countHours < 100) && eyeColor == "зеленый")
    {
        cout << "Не подходит" << endl;
    } else {
        cout << "Подходит" << endl;
    }
}