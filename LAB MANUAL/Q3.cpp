/*
Q3. A weather app developer needs to provide both Celsius and Fahrenheit readings.
 Implement a solution to
convert Fahrenheit temperature into Centigrade or vice versa.
*/
#include <iostream>
#include <iomanip>
using namespace std;
float CelciusToFahrenheit(float a);
float CelciusToFahrenheit(float a)
{
    float b = (a * 1.8) + 32.0;
    return b;
}
float FahrenheitToCelcius(float c);
float FahrenheitToCelcius(float c)
{
    float d = (c - 32.0) * (5.0 / 9.0);
    return d;
}

int main()
{
    int op;
    float temp;
    cout << "Select the type of temperature conversion:" << endl
         << "For Celcius to Fahrenheit:1" << endl
         << "For Fahrenheit to Celcius:2" << endl;
    cout << "Enter the selected option here:";
    cin >> op;
    cout << fixed << setprecision(2);
    if (op == 1)
    {
        cout << "Enter the temperature(Celcius) here:";
        cin >> temp;
        cout << "Your temperature in Fahrenheit is:" << CelciusToFahrenheit(temp);
    }
    else if (op == 2)
    {
        cout << "Enter the temperature(Fahrenheit) here:";
        cin >> temp;
        cout << "Your temperature in Celcius is:" << FahrenheitToCelcius(temp);
    }
    else{
        cout<<"Invalid Selection!";
    }

    return 0;
}