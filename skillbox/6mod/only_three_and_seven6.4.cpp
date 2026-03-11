#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit;
    bool valid = true;

    while (num > 0)
    {
        digit = num % 10;

        if (digit != 3 && digit != 7)
        {
            valid = false;
            break;
        }

        num /= 10;
    }

    if (valid)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}