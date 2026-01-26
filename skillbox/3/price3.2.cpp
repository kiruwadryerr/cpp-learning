#include <iostream>
using namespace std;

int main()
{
    int productPrice;
    cout << "Product price: ";
    cin >> productPrice;
    int discount;
    cout << "Discount: ";
    cin >> discount;
    int deliveryCost;
    cout << "Delivery cost: ";
    cin >> deliveryCost;

    int price = productPrice + deliveryCost - discount;

    cout << "---------\n";
    cout << "Total price: " << price << endl;
}