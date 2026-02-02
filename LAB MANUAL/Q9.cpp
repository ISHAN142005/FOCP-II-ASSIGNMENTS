/*
Q9. A text editor auto-detects whether an input letter is a vowel, a consonant or a number.
Implement a solution to classify the symbol.
*/
#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Enter the single character here: ";
    cin >> letter;

    if (letter >= '0' && letter <= '9')
    {
        cout << "Input is a Number!" << endl;
    }
    else if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
    {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
            letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        {
            cout << "The entered letter is a Vowel!" << endl;
        }
        else
        {
            cout << "The entered letter is a Consonant!" << endl;
        }
    }
    else
    {
        cout << "Invalid Input!" << endl;
    }

    return 0;
}