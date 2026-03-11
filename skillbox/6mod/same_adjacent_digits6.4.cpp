#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit;
    int prevDigit = -1;
    bool hasSame = false;

    while (num > 0)
    {
        digit = num % 10;

        if (digit == prevDigit)
        {
            hasSame = true;
            break;
        }

        prevDigit = digit;
        num /= 10;
    }

    if (hasSame)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}