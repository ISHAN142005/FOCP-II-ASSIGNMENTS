/*
Q2. An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute
the area of a circle.
*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float radius, area;
    cout << "Enter the radius of the circular foundation:";
    cin >> radius;
    area = 3.14 * (radius * radius);
    cout << fixed << setprecision(2);
    cout << "Space covered by a circular fountain is:" << area;

    return 0;
}