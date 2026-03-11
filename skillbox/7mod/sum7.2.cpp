#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Сколько чисел вы хотите сложить? ";
    cin >> count;
    int num;
    int sum = 0;

    if (count <= 0)
    {
        cout << "Количество чисел не может быть отрицательным! Попробуйте еще раз: ";
        cin >> count;
    }

    for (int i = 0; i < count; i++)
    {
        cout << "Введите число: ";
        cin >> num;
        sum += num;
    }

    cout << "Сумма ваших чисел: " << sum << endl;
}