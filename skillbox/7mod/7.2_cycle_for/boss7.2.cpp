#include <iostream>
using namespace std;

int main()
{
    string answ = "Да, конечно, сделал.";
    string line;
    for(int n = 1; line != answ; n++)
    {
        cout << "Выполнил задание? ";
        getline(cin, line);

        if (line == answ)
        {
            cout << "Ну почему тебя нужно спрашивать "  << n << " раз?";
        }
    }

}