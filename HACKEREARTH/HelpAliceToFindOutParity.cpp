#include <iostream>
using namespace std;

int main()
{
    long long L, R;
    cin >> L >> R;

    long long odd_count = 0;

    long long first_odd;
    if (L % 2 == 1)
    {
        first_odd = L;
    }
    else
    {
        first_odd = L + 1;
    }

    long long last_odd;
    if (R % 2 == 1)
    {
        last_odd = R;
    }
    else
    {
        last_odd = R - 1;
    }

    if (first_odd <= last_odd)
    {
        odd_count = ((last_odd - first_odd) / 2) + 1;
    }
    else
    {
        odd_count = 0;
    }

    if (odd_count % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}