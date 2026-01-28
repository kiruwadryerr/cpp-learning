#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int sum;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите их сумму: ";
    cin >> sum;

    cout << "---Проверяем---" << endl;

    if (sum == (a + b))
    {
        cout << "Верно!" << endl;
    } else 
    {
        cout << "Ошибка! Верный результат: " << a + b << endl; 
    }
}