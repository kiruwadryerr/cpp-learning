#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Сколько сейчас часов? ";
    cin >> time;

    if (time < 0 || time > 23)
    {
        cout << "Ошибка! Число должно быть положительным и не больше 23!" << endl;
        cout << "Попробуйте еще раз: ";
        cin >> time;
    }

    for (int i = 0; i < time; i++)
    {
        cout << "Ку-ку!" << endl;
    }
}