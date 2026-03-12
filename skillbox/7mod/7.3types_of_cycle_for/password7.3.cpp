#include <iostream>
using namespace std;

int main()
{
    int password = 2183;
    int pass;

    for(;;)
    {
        cout << "Введите пароль: ";
        cin >> pass;
        if (pass == password)
        {
            cout << "Правильный пароль!";
            break;
        }
        cout << "Пароль неверный! Попробуйте еще раз." << endl;
    }

}