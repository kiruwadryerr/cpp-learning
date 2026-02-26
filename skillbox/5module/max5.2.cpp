#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Максимальное число равно " << a << endl;
        } else {
            cout << "Максимальное число равно " << c << endl;
        }
    } else {
        if (b > c)
        {
            cout << "Максимальное число равно " << b << endl;
        } else {
            cout << "Максимальное число равно " << c << endl;
        }
    }

}