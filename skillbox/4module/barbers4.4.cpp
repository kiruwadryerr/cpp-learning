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

    int needBarbers = countMans / mansPerBarber;
    cout << "Барберов нужно: " << needBarbers << endl; 
    if (countMans % mansPerBarber > 0 )
    {
        needBarbers +=1;
        cout << "Барберов нужно: " << needBarbers << endl;
    }
    
    if (needBarbers > countBarbers)
    {
        cout << "Барберов недостаточно! Не хватает еще " << needBarbers - countBarbers << endl;
    } else
    {
        cout << "Барберов хватает!" << endl;
    }



}