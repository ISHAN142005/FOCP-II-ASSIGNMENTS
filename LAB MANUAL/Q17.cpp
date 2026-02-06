/*
Q17. A learning application analyzes numbers for mathematical properties.
Design a solution to check whether a given number is a Perfect number or an Armstrong number.
*/
// perfect ex. 6 1+2+3=6
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    vector<int> d;
    int c = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            c++;
        }
    }

    int s1 = 0;
    cout << "Divisors: ";
    for (int i = 0; i < c; i++)
    {
        cout << d[i] << " ";
        s1 += d[i];
    }

    if (s1 == n)
    {
        cout << "\n"
             << n << " is a Perfect Number" << endl;
    }
    else
    {
        cout << "\n"
             << n << " is not a Perfect Number" << endl;
    }

    cout << "----------------------" << endl;

    vector<int> v;
    int t = n;
    while (t > 0)
    {
        v.push_back(t % 10);
        t /= 10;
    }

    int len = v.size();
    long long s2 = 0;

    for (int i = 0; i < len; i++)
    {
        int val = v[i];
        long long p = 1;
        for (int j = 0; j < len; j++)
        {
            p *= val;
        }
        s2 += p;
    }

    cout << "Armstrong sum: " << s2 << endl;
    if (s2 == n)
    {
        cout << n << " is an Armstrong Number" << endl;
    }
    else
    {
        cout << n << " is not an Armstrong Number" << endl;
    }

    return 0;
}