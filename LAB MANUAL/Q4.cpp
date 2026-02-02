/*
Q4. A shopkeeper wants to calculate the total bill amount
after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and unit price.
 Compute the amount and apply 20% discount.
*/
#include <iostream>
using namespace std;

int main()
{
    int op;
    int ItemNo[100], Quantity[100];
    float Price[100];
    float Total;
    float TotalBill = 0;
    float FinalBill;
    int i = 0;
    cout << "MENU-" << endl;
    cout << "For adding item (1)" << endl
         << "To get the final bill (2)" << endl;
    cin >> op;
    while (true)
    {
        if (op == 1)
        {
            cout << "Enter the Item No:";
            cin >> ItemNo[i];
            cout << "Enter the Quantity:";
            cin >> Quantity[i];
            cout << "Enter the unit price:";
            cin >> Price[i];
            Total = Quantity[i] * Price[i];
            TotalBill += Total;
            cout << "ADD MORE PRODUCTS(1)" << endl
                 << "BILL(2)" << endl;
            cin >> op;
            i++;
        }
        else if (op == 2)
        {
            break;
        }
        else
        {
            cout << "Invalid Input!,Try Again" << endl;
            cin >> op;
        }
    }
    FinalBill = TotalBill - (TotalBill * 0.2);
    cout << "The  Bill (Without 20% Discout)is:" << TotalBill << endl;
    cout << "The Final Bill (20% Discout Applied)is:" << FinalBill << endl;
    cout << "THANK YOU" << endl;
    return 0;
}