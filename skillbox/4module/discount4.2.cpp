#include <iostream>
using namespace std;

int main()
{
    int price;
    int total = 0;
    cout << "Введите стоимость 1-го товара: ";
    cin >> price;
    total += price;
    cout << "Введите стоимость 2-го товара: ";
    cin >> price;
    total += price;
    cout << "Введите стоимость 3-го товара: ";
    cin >> price;
    total += price;

    if (total > 10000)
    {
        total *= 0.9;
        cout << "Так как ваш чек превышает 10000р - вы получаете скидку в 10%!\n";
    }

    cout << "С вас " << total << " рублей!" << endl;
}