/*
Q15. A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter thr total numbers(n):";
    cin >> n;

    vector<int> number(n);
    cout << "Enter the 1 numbe here:";
    cin >> number[0];

    int max = number[0];

    for (int i = 1; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " number here:";
        cin >> number[i];
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    cout << "The largest sale number is:" << max;

    return 0;
}