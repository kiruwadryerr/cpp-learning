#include <iostream>
using namespace std;

int main()
{
    int a, b ,c;
    cout << "Введите длину трех палочек: ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Треугольник сложить нельзя!" << endl;
    } else {
        cout << "Треугольник сложить можно!" << endl;
    }
}