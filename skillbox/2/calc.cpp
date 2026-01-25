#include <iostream>
using namespace std;

int main()
{
    int fullPrice = 1000;
    int discount = 200;
    int deliveryPrice = 100;
    int totalPrice = fullPrice + deliveryPrice - discount;

    cout << "Цена товара с учетом скидки: " << totalPrice;
}