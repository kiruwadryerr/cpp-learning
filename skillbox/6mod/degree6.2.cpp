#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, k;
    cout << "Введите число, которое хотите возвести в степень: ";
    cin >> k;
    cout << "В какую степень? ";
    cin >> n;

    int count = 1;
    while (count <= n)
    {
        cout << k << "^" << count << " = " << pow(k, count) << endl;
        count++;
    }
}