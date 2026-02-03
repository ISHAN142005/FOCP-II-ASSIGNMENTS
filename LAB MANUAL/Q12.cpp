/*
Q12. A civil engineer classifies a triangle design as ,right angled ,equilateral, isosceles, or scalene.
Implement a solution to check the triangle type based on its sides.
*/
#include <iostream>
using namespace std;

int main()
{
    int sides[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter side " << i + 1 << " of the triangle: ";
        cin >> sides[i];
    }

    cout << "The sides of the triangle are: "
         << sides[0] << ", " << sides[1] << ", " << sides[2] << endl;

    int a = sides[0], b = sides[1], c = sides[2];

    
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Invalid triangle!" << endl;
        return 0;
    }

    if (a == b && b == c)
    {
        cout << "The triangle is Equilateral!" << endl;
    }
    else if (a * a == b * b + c * c ||
             b * b == a * a + c * c ||
             c * c == a * a + b * b)
    {
        cout << "The triangle is Right Angled!" << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "The triangle is Isosceles!" << endl;
    }
    else
    {
        cout << "The triangle is Scalene!" << endl;
    }

    return 0;
}