/*
Q5. A student wants to swap the values of two variables for practising coding basics.
Implement a solution to swap two numbers using different techniques.
*/ \
#include<iostream>
using namespace std;
void swap(int *a, int *b);
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cout << "Enter the first number(a):";
    cin >> a;
    cout << "Enter the second number(b):";
    cin >> b;
    cout << "Before Swap" << endl;
    cout << "The value of a:" << a << endl;
    cout << "The value of b:" << b << endl;
    swap(&a, &b);
    cout << "After Swap" << endl;
    cout << "The value of a:" << a << endl;
    cout << "The value of b:" << b << endl;

    /*
 another way
    a = a + b;
    b = a - b;
    a = a - b;  
    */

    return 0;
}