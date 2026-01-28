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
    cout << "---Проверяем---" << endl;

    if (a < b)
    {
        cout << "Наименьшое число: " << a << endl;
    } else if (b < a)
    {
        cout << "Наименьшое число: " << b << endl;
    } else
    {
        cout << "Числа равны!" << endl;
    }

}