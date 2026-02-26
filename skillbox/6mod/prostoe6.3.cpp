#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Введите положительное число: ";
    cin >> num;
    int current = 1;
    int count = 0;

    while (current <= num)
    {
        if (num % current == 0)
        {
            count++;
            if (count > 2)
            {
                break;
            }
        }
        current++;
    }

    if (count == 2)
    {
        cout << "Число простое." << endl;
    } else {
        cout << "Число не простое." << endl;
    }
}