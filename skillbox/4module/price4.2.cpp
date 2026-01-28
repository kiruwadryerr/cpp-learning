#include <iostream>
using namespace std;

int main()
{
    int productCost;
    int deliveryCost;
    int discount;
    cout << "Введите стоимость товара: ";
    cin >> productCost;
    cout << "Введите стоимость доставки: ";
    cin >> deliveryCost;
    cout << "Скидка: ";
    cin >> discount;

    if (productCost >= 10000)
    {
        deliveryCost /= 2;
        cout << "Стоимость товара превышает 10000 рублей.";
        cout << "Вы получаете скидку на доставку!";
    }

    int price = productCost + deliveryCost - discount;
    cout << "===========" << endl;
    cout << "Полная стоимость товара: " << price << endl;

}