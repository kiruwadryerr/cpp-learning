#include <iostream>
using namespace std;

int main()
{
    int time;
    int total = 0;
    int maxTime = 0;
    int n;
    cout << "Сколько было тренировок на недели? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Сколько длилась " << i + 1 << " тренировка?";
        cin >> time;
        total += time;

        if (maxTime < time)
        {
            maxTime = time;
        }

    }

    cout << "Всего: " << total << " мин." << endl;
    cout << "Средняя: " << (double)total / n << " мин." << endl;
    cout << "Максимальная: " << maxTime << " мин." << endl;

}