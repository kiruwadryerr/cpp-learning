#include <iostream>
using namespace std;

int main()
{
    int salary1, salary2, salary3;
    cout << "Введите зарплату первого сотрудника: ";
    cin >> salary1;
    cout << "Введите зарплату второго сотрудника: ";
    cin >> salary2;
    cout << "Введите зарплату третьего сотрудника: ";
    cin >> salary3;

    cout << "----Считаем----" << endl;

    int maxSalary = salary1;
    if (salary2 > maxSalary)
    {
        maxSalary = salary2;
    } if (salary3 > maxSalary)
    {
        maxSalary = salary3;
    }
    
    int minSalary = salary1;
    if (salary2 < minSalary)
    {
        minSalary = salary2; 
    } if (salary3 < minSalary)
    {
        minSalary = salary3;
    }


    cout << "Самая высокая зарплата в отделе: " << maxSalary << " рублей." << endl;
    cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << maxSalary - minSalary << " рублей." << endl;
    cout << "Средняя зарплата в отделе: " << (salary1 + salary2 + salary3) / 3 << " рублей." << endl;
 }