#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;

    while (a != 66666)
    {
        cout << "Введите пин-код: ";
        cin >> a >> b >> c >> d;
        if (a + b + c + d == 42)
        {
            cout << "Ввод корректный!" << endl;
        } else
        {
            cout << "Ввод некорректный!" << endl;
        }
        
    }
}