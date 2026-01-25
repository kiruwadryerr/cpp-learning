#include <iostream>
using namespace std;

int main()
{
    int sum = 4000000;
    int countEntrance = 10;
    int flatsPerEntrance = 40;
    int price = sum / (countEntrance * flatsPerEntrance);
    cout << "Приветствуем вас в калькуляторе квартплаты!\n";
    cout << "Введите сумму, указанную в квитанции: " << sum << "\n";
    cout << "Сколько подъездов в вашем доме? " << countEntrance << "\n";
    cout << "Сколько квартир в каждом подъезде? " << flatsPerEntrance << "n";
    cout << "----Считаем-----\n";
    cout << "Каждая квартира должна платить по " << price << " рублей \n";
    
}