/*
Q18. A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome.
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number here: ";
    cin >> number;

    int real = number;
    int rev = 0;

    while (number > 0) {
        int digit = number % 10;
        rev = rev * 10 + digit;
        number /= 10;
    }

    if (real == rev)
        cout << "Palindrome Number" << endl;
    else
        cout << "Not Palindrome Number" << endl;

    return 0;
}