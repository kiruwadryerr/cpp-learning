#include <iostream>
using namespace std;

int main()
{
    string answer;
    int counter = 0;

    for (; counter < 3;)
    {
        cout << "Твой ответ, Бильбо: ";
        cin >> answer;

        if (answer == "Время")
        {
            cout << "Вы ответили правильно!" << endl;
            break;
        }

        cout << "Неверный ответ." << endl;
        counter++;
    }

    if (counter >= 3)
    {
        cout << "Неверный ответ! Вас съели(" << endl;
    }
}