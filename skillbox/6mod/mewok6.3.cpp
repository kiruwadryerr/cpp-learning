#include <iostream>
using namespace std;

int main()
{
    int code;
    cout << "Введите фрагмент кода: ";
    cin >> code;
    int num;
    while (code > 0)
    {
        num = code % 10;
        if (num >= 2)
        {
            cout << "Это не фрагмент кода!" << endl;
            break;
        }
        code /= 10;
    }
    if (code == 0)
    {
        cout << "Программа состоит только из 0 и 1, значит это код программы!" << endl;
    }
}