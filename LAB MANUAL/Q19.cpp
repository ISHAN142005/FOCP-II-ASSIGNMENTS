/*
Q19. A network security system generates prime numbers in a range for encryption key pools.
 Implement a solution to find all prime numbers within a given range.
*/
#include <iostream>
using namespace std;
int main()
{
    int numone;
    int numlast;
    cout << "Enter the First Number:";
    cin >> numone;
    cout << "Enter the Last Number:";
    cin >> numlast;

    for (int n = numone; n <= numlast; n++)
    {
        if (n <= 1)
            continue;
        int prime = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            cout << n << " ";
        }
    }
    return 0;
}
