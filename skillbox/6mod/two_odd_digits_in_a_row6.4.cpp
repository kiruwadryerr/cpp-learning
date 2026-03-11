#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit;
    int prevDigit = -1;
    bool hasOddPair = false;

    while (num > 0)
    {
        digit = num % 10;

        if (digit % 2 != 0 && prevDigit % 2 != 0)
        {
            hasOddPair = true;
            break;
        }

        prevDigit = digit;
        num /= 10;
    }

    if (hasOddPair)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}