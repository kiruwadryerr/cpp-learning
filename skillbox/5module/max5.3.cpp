#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    cout << "Максимальное число равно " << max << endl;
}