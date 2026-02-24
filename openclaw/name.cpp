#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Как тебя зовут? ";
    string name;
    cin >> name;
    cout << "Сколько лет? ";
    int age;
    cin >> age;

    cout << "Привет, " << name << "! Через 5 лет тебе будет " << age + 5 << " лет." << endl;
}
