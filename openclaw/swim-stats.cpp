#include <iostream>
using namespace std;

int main()
{
    double total = 0;
    double max = 0;
    double min = 60;
    double time[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Введите время дорожки #: " << i + 1;
        cin >> time[i];

        total += time[i];

        if (time[i] > max)
        {
            max = time[i];
        }
        if (time[i] < min)
        {
            min = time[i];
        }
    }

    double avg = total / 5;
    cout << "=== Статистика ===" << endl;
    cout << "Среднее: " << avg << " сек." << endl;
    cout << "Худшее: " << max << " сек." << endl;
    cout << "Лучшее: " << min << " сек." << endl;

}
