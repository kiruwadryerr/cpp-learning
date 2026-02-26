#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    if (a == b && a == c)
    {
        cout << "3 совпадения" << endl;
    } else if (a == b || a == c || b == c)
    {
        cout << "2 совпадения" << endl;
    } else 
    {
        cout << "0 совпадений" << endl;
    }
}