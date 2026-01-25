#include <iostream>
using namespace std;

int main()
{
    int timeShift = 480;
    int timeOrder = 2;
    int timeCollect = 4;
    int clients = timeShift / (timeOrder + timeCollect);
    cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
    cout << "Введите длительность смены в минутах: " << timeShift << "\n";
    cout << "Сколько минут клиент делает заказ? " << timeOrder << "\n";
    cout << "Сколько минут кассир собирает заказ? " << timeCollect << "\n";
    cout << "-----Считаем-----\n";
    cout << "За смену длиной " << timeShift << " минут кассир успеет обслужить " << clients << " клиентов.\n";
}