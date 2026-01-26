#include <iostream>
using namespace std;
int main()
{
    cout << "Bamboo VS pests\n";
    int startHeight = 100;
    int growth = 50;
    int losses = 20;

    int thirdDayHeight = ((growth - losses) * 2 + (growth / 2)) + startHeight;

    cout << "Height of bamboo is: " << thirdDayHeight << " sm.\n";

}