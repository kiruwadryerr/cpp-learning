#include <iostream>
using namespace std;

int main()
{
    bool valid = false;
    int square;
    cout << "Введите площадь участка: ";
    cin >> square;

    if (square > 1000000)
    {
        cout << "Размер участка не должен превышать 1000000м2. Попробуйте еще раз!" << endl;
        cin >> square;
    }

    for(int i = 0; i < square; i++)
    {
        if (i*i == square)
        {
            valid = true;
            break;
        }


    }

    if (valid)
    {
        cout << "Ваша площадь участка является точным квадратом числа!" << endl;
    } else
    {
        cout << "Ваша площадь участка не является точным квадратом числа!" << endl;
    }
}