/*
Q10. A calendar app calculates whether February has 29 days.
Implement a solution to check if a year is a leap year or not
*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year here:";
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << year << " is a Leap Year!" << endl;
        cout << "The Feburary month in " << year << " will have 29 days!" << endl;
    }
    else
    {
        cout << year << " is NOT a Leap Year!" << endl;
        cout << "The Feburary month in " << year << " will not have 29 days!" << endl;
    }

    return 0;
}