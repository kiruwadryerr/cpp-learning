#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    cout << "---Считаем---" << endl;

    if (a % b == 0)
    {
        cout << "Да, " << a << " делится на " << b << " без остатка!" << endl;
    } else
    {
        cout << "Нет, " << a << " не делится на " << b << " без остатка!" << endl;
    }
           
}