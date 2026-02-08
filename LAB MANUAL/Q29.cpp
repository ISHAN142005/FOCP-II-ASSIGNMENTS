/*
Q29. A weather monitoring app records 30-day temperature logs.
Implement a solution to store daily temperatures in an array and
 display the minimum temperature for the month.
*/
#include <iostream>
using namespace std;
int main()
{
    float temp[30];
    cout << "Enter day " << 1 << " temperature(in Celcius) here:";
    cin >> temp[0];
    float min = temp[0];
    for (int i = 1; i < 30; i++)
    {
        cout << "Enter day " << i + 1 << " temperature(in Celcius) here:";
        cin >> temp[i];
        if (temp[i] < min)
        {
            min = temp[i];
        }
    }
    cout << "The minimum temperature in the 30 days is: " << min << endl;

    return 0;
}