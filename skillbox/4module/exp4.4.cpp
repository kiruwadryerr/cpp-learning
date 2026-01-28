#include <iostream>
using namespace std;

int main()
{
    int exp;
    cout << "Введите число очков опыта: ";
    cin >> exp;
    cout << "---Считаем---" << endl;

    if (exp >= 5000)
    {
        cout << "Ваш уровень: 4" << endl;
    } else if (exp >= 2500) 
    {
        cout << "Ваш уровень: 3" << endl;
    } else if (exp >= 1000)
    {
        cout << "Ваш уровень: 2" << endl;
    } else if (exp >= 0)
    {
        cout << "Ваш уровень: 1" << endl;
    } else
    {
        cout << "Ожидалось не отрицательное число!" << endl;
    }
}