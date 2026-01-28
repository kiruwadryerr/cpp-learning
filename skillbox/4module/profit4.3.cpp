#include <iostream>
using namespace std;

int main()
{
    int profit;
    cout << "Введите размер прибыли: ";
    cin >> profit;

    if (profit >= 50000) 
    {
        int tax = profit * 30 / 100;
        cout << "Размер налога(30%) равен: " << tax << endl;
    } else if (profit >= 10000)
    {
        int tax = profit * 20 / 100;
        cout << "Размер налога(20%) равен: " << tax << endl;
    } else if (profit > 0)
    {
        int tax = profit * 13 / 100;
        cout << "Размер налога(13%) равен: " << tax << endl;
    } else if (profit == 0)
    {
        cout << "Да ну?))))" << endl;
    } else
    {
        cout << "Ожидалось не отрицательное число!" << endl;
    }
}