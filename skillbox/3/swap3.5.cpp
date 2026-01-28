#include <iostream>
using namespace std;

int main()
{
    int a = 42;
    int b = 153;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int c = b;
    b = a;
    a = c;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}