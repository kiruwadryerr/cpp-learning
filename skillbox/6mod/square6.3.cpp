#include <iostream>
using namespace std;

int main()
{
    int area;
    cout << "Введите площадь квартиры: ";
    cin >> area;
    int count = 1;
    int num;

    while(count * count <= area)
    {
        num = count * count;
        if(num != area)
        {
            cout << "Площадь вашей квартиры не является точным квадратом числа!" << endl;
            break;
        }

        count++;
    }

    if (num == area)
    {
        cout << "Площадь вашей квартиры является точным квадратом числа!" << endl;
    }
}