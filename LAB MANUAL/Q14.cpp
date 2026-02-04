/*
Q14. Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.
The program should continue executing based on the user's choice and display the result of each operation.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double a, b;
    cout << "CONDITION:The first number should be greater than second number!" << endl;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    string act;
    cout << "*****OPERATORS*****" << endl
         << "For addition +" << endl
         << "For subtraction: -" << endl
         << "For multiplication: * " << endl
         << "For division: /" << endl
         << "For exiting the system: e or E" << endl;

    while (true)
    {
        cout << "Select the operators!" << endl;
        cin >> act;
        if (act == "+")
        {
            cout << "The sum of both the numbers is= " << a + b << endl;
        }
        else if (act == "-")
        {
            cout << "The difference of both the numbers is= " << a - b << endl;
        }
        else if (act == "*")
        {
            cout << "The product of both the numbers is= " << a * b << endl;
        }
        else if (act == "/")
        {
            if (b == 0)
            {
                cout << "This is not possible  operation!" << endl;
            }
            else
            {
                cout << "The quotient of both the numbers is= " << a / b << endl;
            }
        }
        else if ((act == "E") || (act == "E"))
        {
            cout << "THANKS FOR USING THE SYSTEM!" << endl;
            break;
        }
    }
    return 0;
}