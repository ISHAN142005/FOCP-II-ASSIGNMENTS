/*
Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
expenses and apply a discount accordingly
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int item;
    float price;
    float bill;
    cout << "Enter the number of items here:";
    cin >> item;
    cout << "Enter the price of the item:";
    cin >> price;
    cout << fixed << setprecision(2);
    bill = item * price;
    if (item > 1000)
    {
        bill = bill - (bill * 0.1);//or bill*=0.9;
        cout << "The total bill after 10% discount is:" << bill << endl;
    }
    else if (item <= 1000)
    {
        cout << "The total bill without 10% discount is:" << bill << endl;
    }
    else
    {
        cout << "Invaid Input!";
    }

    return 0;
}