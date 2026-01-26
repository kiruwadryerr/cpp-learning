#include <iostream>
using namespace std;

int main()
{
    cout << "Let's save up!\n";
    string goal;
    cout << "For what? Enter the goal: ";
    cin >> goal;

    int total = 0;
    int money;
    cout << "Sum 1: ";
    cin >> money;
    total += money;
    
    cout << "Sum 2: ";
    cin >> money;
    total += money;

    cout << "Sum 3: ";
    cin >> money;
    total += money;

    cout << "Sum 4: ";
    cin >> money;
    total += money;

    cout << "Sum 5: ";
    cin >> money;
    total += money;

    cout << "============\n";
    cout << "You saved for: " << goal << ". It came out to " << total << " rubles.\n";
}