#include <iostream>
using namespace std;

int main()
{
    string line;

    while (line != "Да, конечно, сделал")
    {
        cout << "Выполнил задачу?";
        getline(cin, line);
    }
    cout << "Молодец!" << endl;
}