#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit;
    int prevDigit = num % 10;
    num /= 10;
    bool valid = true;

    while (num > 0)
    {
        digit = num % 10;

        if (digit > prevDigit)
        {
            valid = false;
            break;
        }

        prevDigit = digit;
        num /= 10;
    }

    if (valid)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}