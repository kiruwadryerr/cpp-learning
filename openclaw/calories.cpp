#include <iostream>
using namespace std;

int main()
{
    int norm = 2500;
    int cal;

    cout << "Сколько было съедено калорий сегодня? ";
    cin >> cal;
    
    if (cal >= norm)
    {
        cout << "Норма!" << endl;
    } else {
        cout << "Маловато! Поешь еще!" << endl;
    }
}