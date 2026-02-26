#include <iostream>
using namespace std;

int main()
{
    int car1, car2, car3, car4;
    cout << "Введите массу въезжающих машин: ";
    cin >> car1 >> car2 >> car3 >> car4;

    if (car1 > 1200 || car2 > 1200 || car3 > 1200 || car4 > 1200)
    {
        cout << "На мост заехала машина, вес которой превышает 1200кг." << endl;
    } else {
        cout << "Вес машин не превышает 1200кг." << endl;
    }
}