#include <iostream>
using namespace std;

int main()
{
    int profit;
    cout << "Введите сумму дохода: ";
    cin >> profit;
    int tax;

    cout << "----Считаем----" << endl;
    if (profit > 50000)
    {
        tax = ((profit - 50000) * 0.3) + ((50000 - 10000) * 0.2) + (10000 * 0.13);
        cout << "Вам нужно заплатить: " << tax << " рублей налога" << endl;
    } else if (profit > 10000)
    {
        tax = ((profit - 10000) * 0.2) + (10000 * 0.13); 
        cout << "Вам нужно заплатить: " << tax << " рублей налога" << endl;
    } else if (profit > 0)
    {
        tax = profit * 0.13;
        cout << "Вам нужно заплатить: " << tax << " рублей налога" << endl; 
    } else
    {
        cout << "Ожидало не отрицательное число!" << endl;
    }
}