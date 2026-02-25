#include <iostream>
using namespace std;

int main()
{
    int total = 0;
    int n;
    int num;
    int count = 0;

    cout << "Сколько чисел хочешь сложить? ";
    cin >> n;

    while(count != n)
    {
        cout << "Введите число: ";
        cin >> num;

        total+= num;
        count++;
    }

    cout << "Сумма чисел = " << total << endl;
}