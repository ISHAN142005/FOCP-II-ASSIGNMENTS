#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX = 10000000;

vector<int> spf;

void sieve()
{
    spf.resize(MAX + 1);
    for (int i = 1; i <= MAX; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i * i <= MAX; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
}

int countPrimeFactors(int n)
{
    int count = 0;
    int last = 0;
    while (n > 1)
    {
        int p = spf[n];
        if (p != last)
        {
            count++;
            last = p;
        }
        n /= p;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int distinctPrimes = countPrimeFactors(N);

        cout << (1 << distinctPrimes) << "\n";
    }

    return 0;
}