#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int digit;
    bool allGreater3 = true;

    while (num > 0)
    {
        digit = num % 10;

        if (digit <= 3)
        {
            allGreater3 = false;
            break;
        }

        num /= 10;
    }

    if (allGreater3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}