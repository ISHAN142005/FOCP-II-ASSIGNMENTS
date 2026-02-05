#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number here: ";
    cin >> number;

    if (number <= 1)
    {
        cout << "Number is not prime" << endl;
    }
    else
    {
        bool isPrime = true;
        for (int i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << "Entered number is a Prime Number!" << endl;
        else
            cout << "Entered number (" << number << ") is not a prime number" << endl;
    }
    return 0;
}