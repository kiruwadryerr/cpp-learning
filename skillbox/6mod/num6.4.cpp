#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Введите положительное число без нулей в начале: " << endl;
    cin >> num;

    int result;
    while (num != 0)
    {
        result = result * 10 + num % 10;
        num /= 10;
    }

    cout << result;
}