#include <iostream>
using namespace std;

int main()
{
    int speed;
    int time = 2;
    int distance = 200;
    cout << "Введите среднюю скорость автомобиля: ";
    cin >> speed;

    if (speed * time > distance)
    {
        cout << "Вы приехали!" << endl;
    }

    cout << "Вы успели проехать " << speed * time << " км." << endl;
}