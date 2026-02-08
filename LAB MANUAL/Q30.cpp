/*
Q30. A payroll system maintains employee salary records. Implement a solution to accept salary of
10 employees in an array, compute total salary and average salary, then display the result.
*/
#include <iostream>
using namespace std;
int main()
{
    float salary[10];
    float totalsalary = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the salary of employee number " << i + 1 << " here:";
        cin >> salary[i];
        totalsalary += salary[i];
    }
    cout << "The total salary of all the emplyees is: " << totalsalary << endl;
    float avgSalary = totalsalary / 10;
    cout << "The average salary of the emplyees is: " << avgSalary << endl;

    return 0;
}