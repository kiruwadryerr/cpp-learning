#include <iostream>
using namespace std;

int main()
{
    int count = 10;
    string answer;
    for(; count == 0; count--)
    {
        cout << "Вы готовы перерезать провод? У вас осталось " << count << " шага." << endl;
        cin >> answer;


        if (answer == "Да")
        {
            cout << "Бомба обезврежена! До ее взрыва оставалось " << count << " шага." << endl;
            break;
        }

        
    }
    
    if (count == 0)
    {
        cout << "Бомба взорвалась. Вы не успели ее обезвредить." << endl;
    }
}