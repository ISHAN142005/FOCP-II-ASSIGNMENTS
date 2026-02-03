/*
Q13. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
solution to calculate the roots of a quadratic equation.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the coefficient of x^2(a) here:";
    cin >> a;

    cout << "Enter the coefficient of x(b) here:";
    cin >> b;

    cout << "Enter the constant term(a) here:";
    cin >> c;

    cout << "The Quadratic Equation is:" << a << "x^2" << b << "x" << c << endl;

    double d = (b * b) - (4 * a * c);
    double e = sqrt(d);
    double root1;
    double root2;

    root1 = ((-b) + e) / 2 * a;
    root2 = ((-b) - e) / 2 * a;

    double iota = d * (-1);
    double imag = sqrt(iota);

    if (d < 0)
    {
        cout << "Imaginary Roots!" << endl;
        cout << "Roots are:" << -b << "+" << imag << "i" << "/ " << (2 * a) << "," << -b << "-" << imag << "i" << "/ " << (2 * a) << endl;
    }
    else if (d == 0)
    {
        cout << "Real and equal roots!" << endl
             << "Roots are:" << root1 << "," << root2 << endl;
    }
    else if (d > 0)
    {
        cout << "Real and distinct roots!" << endl
             << "Roots are:" << root1 << "," << root2 << endl;
    }
    return 0;
}