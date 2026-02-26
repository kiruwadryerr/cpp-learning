#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Введите год: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "В этом году 366 дней!" << endl;
            } else {
                cout << "В этом году 365 дней!" << endl;
            }
        } else {
            cout << "В этом году 365 дней!" << endl;
        }
    } else {
        cout << "В этом году 365 дней!" << endl;
    }
}