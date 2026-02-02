/*
Q8. A monitoring system generates a sequence of numeric event IDs from 1 to N.
To make logs easier to analyse, the system applies tags to certain events based
on predefined rules:
• Events whose ID is divisible by 3 are tagged as “Buzz”
• Events whose ID is divisible by 5 are tagged as “Fizz”
• Events divisible by both 3 and 5 receive both tags
*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the upper limit of IDs (N): ";
    cin >> N;

    for (int id = 1; id <= N; id++)
    {
        cout << "Event " << id << ": ";
        if (id % 3 == 0 && id % 5 == 0)
        {
            cout << "Fizz Buzz";
        }
        else if (id % 3 == 0)
        {
            cout << "Buzz";
        }
        else if (id % 5 == 0)
        {
            cout << "Fizz";
        }
        else
        {
            cout << "No tag";
        }
        cout << endl;
    }

    return 0;
}