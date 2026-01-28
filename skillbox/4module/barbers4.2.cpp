#include <iostream>
using namespace std;

int main()
{
    int mansPerBarber = 8 * 30;
    int countMans;
    int countBarbers;
    cout << "Введите кол-во мужчин, проживающих в городе: ";
    cin >> countMans;
    cout << "Введите кол-во барберов, работающих в барбершопах: ";
    cin >> countBarbers;

    int totalBarbers = countBarbers * mansPerBarber;
    if (totalBarbers < countMans)
    {
        cout << "Барберов недостаточно!" << endl;
        int needBarbers = (countMans / mansPerBarber) + 1;
        countBarbers = needBarbers - countBarbers;
        cout << "Не хватает еще " << countBarbers << " барберов." << endl;
    } else {
        cout << "Барберов достаточно!" << endl;
    }



}