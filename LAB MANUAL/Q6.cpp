#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number of employees: ";
    cin >> number;
    cin.ignore();//yeh isliye use hua hai bcoz next input is getline format

    vector<string> name(number);//needed vector bcoz can declare array with variable size
    vector<float> BasicSalary(number), Bonus(number), NetSalary(number);
    float increment = 0.12;

    for (int i = 0; i < number; i++)
    {
        cout << "Enter the name of employee " << (i + 1) << ": ";
        getline(cin, name[i]);

        cout << "Enter the basic salary of " << name[i] << ": $";
        cin >> BasicSalary[i];
        cin.ignore();

        Bonus[i] = increment * BasicSalary[i];
        NetSalary[i] = BasicSalary[i] + Bonus[i];

        cout << "The bonus received by " << name[i] << " is: $" << Bonus[i] << endl;
        cout << "The net salary of " << name[i] << " is: $" << NetSalary[i] << endl;
    }

    return 0;
}