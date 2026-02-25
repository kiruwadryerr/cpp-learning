#include <iostream>
using namespace std;

int main()
{
    string password;
    cout << "Введите пароль: \n";
    cin >> password;

    while (password != "blablabla")
    {
        cout << "Введите пароль: \n";
        cin >> password;
    }
    cout << "Правильный пароль!" << endl;
}