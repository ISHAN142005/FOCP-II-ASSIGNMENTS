/*
Q1. A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average.
*/
#include <iostream>
using namespace std;
int main()
{
    float n1 ,n2,n3,avg;
    cout<<"Enter marks 1(0-100):";
    cin>>n1;
    cout<<"Enter marks 2(0-100):";
    cin>>n2;
    cout<<"Enter marks 3(0-100):";
    cin>>n3;
    avg=((n1+n2+n3)/3);
    cout<<"The average of the three entered marks is:"<<avg<<endl;
}