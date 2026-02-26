#include <iostream>
using namespace std;

int main()
{
    int money;
    cout << "Введите кол-во денег, которое хотите снять: ";
    cin >> money;

    if (money <= 100000)
    {
        if (money % 100 == 0)
        {
            cout << "Банкомат выдал денежку!" << endl;
        } else {
            cout << "Сумма должна быть кратна 100!" << endl;
        }
    } else {
        cout << "Банкомат не может выдать больше 100000р." << endl;
    }
}