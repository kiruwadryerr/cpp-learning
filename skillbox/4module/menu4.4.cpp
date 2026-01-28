#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Введите день недели(от 1 до 7): ";
    cin >> day;

    if (day == 1)
    {
        cout << "Меню сегодня(понедельник): " << endl;
        cout << "Гороховый суп" << endl;
        cout << "Салат «Цезарь» с креветками" << endl;
        cout << "Куриная ножка с пюре" << endl;
        cout << "Морс" << endl;  
    } else if (day == 2)
    {
        cout << "Меню сегодня(вторник): " << endl;
        cout << "Харчо" << endl;
        cout << "Салат «Оливье»" << endl;
        cout << "Баварские колбаски с капустой" << endl;
        cout << "Морс" << endl;

    } else if (day == 3)
    {
        cout << "Меню сегодня(среда): " << endl;
        cout << "Гороховый суп" << endl;
        cout << "Салат «Цезарь» с креветками" << endl;
        cout << "Куриная ножка с пюре" << endl;
        cout << "Морс" << endl;  
    } else if (day == 4)
    {
        cout << "Меню сегодня(четверг): " << endl;
        cout << "Харчо" << endl;
        cout << "Салат «Оливье»" << endl;
        cout << "Баварские колбаски с капустой" << endl;
        cout << "Морс" << endl;

    } else if (day == 5)
    {
        cout << "Меню сегодня(пятница): " << endl;
        cout << "Гороховый суп" << endl;
        cout << "Салат «Цезарь» с креветками" << endl;
        cout << "Куриная ножка с пюре" << endl;
        cout << "Морс" << endl;  
    } else if (day == 6)
    {
        cout << "Меню сегодня(суббота): " << endl;
        cout << "Харчо" << endl;
        cout << "Салат «Оливье»" << endl;
        cout << "Баварские колбаски с капустой" << endl;
        cout << "Морс" << endl;
    } else if (day == 7)
    {
        cout << "Меню сегодня(воскресенье): " << endl;
        cout << "Гороховый суп" << endl;
        cout << "Салат «Цезарь» с креветками" << endl;
        cout << "Куриная ножка с пюре" << endl;
        cout << "Морс" << endl;  
    } else 
    {
        cout << "Ожидалось число от 1 до 7!" << endl;
    }
}