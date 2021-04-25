//This program will return the Celsius equivalent of a Fahrenheit temperature
//or the Fahrenheit equivalent of a Celsius temperature

#include <iostream>
using namespace std;

double celsius(double f)
{
    double c;
    c = 5.0 / 9.0 * (f - 32);
    return c;
}

double fahrenheit(double c)
{
    double f;
    f = 9.0 / 5.0 * c + 32;
    return f;
}


int main()
{
    int i;

    cout << "This program will return the Celsius equivalent of a Fahrenheit temperature\n";
    cout << "or the Fahrenheit equivalent of a Celsius temperature\n\n";

    cout << "Enter text of string 1: ";
    cin >> string1;

}