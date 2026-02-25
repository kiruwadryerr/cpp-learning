#include <iostream>
using namespace std;

int main()
{
    string answer;
    string username;
    cout << "Как вас зовут? ";
    cin >> username;

    cout << username << ", купи слона!.";
    getline(cin, answer);

    while (true)
    {
        cout << "Все говорят " << answer << ", а ты купи слона!" << endl;
        getline(cin, answer);
    }
}