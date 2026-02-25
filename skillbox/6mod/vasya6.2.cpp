#include <iostream>
using namespace std;

int main()
{
    string answer;
    int count;
    cout << "О чем нужно напомнить?" << endl;
    getline(cin, answer);
    cout << "Сколько раз нужно напомнить? ";
    cin >> count;
    int t = 0;

    while (t != count)
    {
        cout << answer << endl;
        t++;
    }

}