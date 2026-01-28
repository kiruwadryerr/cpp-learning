#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Введите число: ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "Число " << x << " - четное" << endl;
    } else if (x % 2 == 1)
    {
        cout << "Число " << x << " - не четное" << endl;
    } else
    {
        cout << "Ожидалось не отрицательное число!" << endl;
    }
}