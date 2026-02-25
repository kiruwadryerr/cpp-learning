#include <iostream>
using namespace std;

int main()
{
    string password;
    do {
        cout << "Введите пароль: ";
        cin >> password;
    } while (password != "blablabla");
    cout << "Правильный пароль!" << endl;
}