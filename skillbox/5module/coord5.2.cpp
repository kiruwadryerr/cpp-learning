#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "Введите координаты x, y: ";
    cin >> x >> y;

    if (x == 0)
    {
        cout << "Координата лежит на границе плоскостей." << endl;
    } else if (y == 0)
    {
        cout << "Координата лежит на границе плоскостей." << endl;
    } else if (x > 0)
    {
        if (y > 0)
        {
            cout << "Координата лежит в первой плоскоти." << endl;
        } else {
            cout << "Координата лежит в четвертой плоскости." << endl;
        }
    } else if (x < 0)
    {
        if (y > 0)
        {
            cout << "Координата лежит во второй плоскости." << endl;
        } else {
            cout << "Координата лежит в третьей плоскости." << endl;
        }
    }
}