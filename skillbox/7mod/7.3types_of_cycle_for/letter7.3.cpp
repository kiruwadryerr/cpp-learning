#include <iostream>
using namespace std;

int main()
{
    int startSize;
    cout << "Какого размера ваше письмо? ";
    cin >> startSize; 
    int timesFolded = 0;

    for(int size = startSize; size > 12; size /= 2)
    {
        timesFolded += 2;
    }

    cout << "Вам нужно сложить письмо " << timesFolded << " раз." << endl;
}