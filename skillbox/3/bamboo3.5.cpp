#include <iostream>
using namespace std;

int main()
{
    int beginHeight = 100;
    int dailyGrowth = 50;
    int nightFade = 20;
    int height = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth;
    cout << "Высота бамбука на конец третьего дня будет - " << height << " см." << endl;
}