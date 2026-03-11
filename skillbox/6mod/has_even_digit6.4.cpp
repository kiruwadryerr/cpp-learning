#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit;
    bool hasEven = false;

    while (num > 0)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            hasEven = true;
            break;
        }

        num /= 10;
    }

    if (hasEven)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}