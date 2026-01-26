#include <iostream>
using namespace std;

int main()
{
    string race;
    string userName;
    cout << "Input name: ";
    cin >> userName;
    cout << "Input race: ";
    cin >> race;

    cout << "A new one was born " << race << ", his name is " << userName << ". Welcome to this harsh world!\n";
}