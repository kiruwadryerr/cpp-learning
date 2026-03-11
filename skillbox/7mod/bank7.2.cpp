#include <iostream>
using namespace std;

int main()
{
    int totalMonths;
    cout << "Анатолий, как долго собираетесь копить? ";
    cin >> totalMonths;
    int savedMoney;
    int sum = 0;
    for (int month = 0; month < totalMonths; month++)
    {
        cout << "Месяц " << month << endl;
        cout << "Сколько хотите отложить в этом месяце? ";
        cin >> savedMoney;
        sum += savedMoney;
    }

    cout << "Поздравляем, за " << totalMonths << " месяцев ты накопишь " << sum << " рублей." << endl;
}