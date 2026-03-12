#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    cout << "До какого числа вы хотите вычеслить сумму нечётных чисел? ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }

    cout << "Сумма чисел: " << sum;
}