/*Temprature-conversion program that gives the user the option of converting fahrenheit to celcius or celcius to fahrenheit and
depending upon the user choice carries out the conversion (by using if-else statement)*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    float num1, result;

    cout << "\n\nChoose the Conversion:\t";
    cout << "\n1.Celcius to Fahrenheit:";
    cout << "\n2.Fahrenheit to Celcius";
    cout << "\nEnter your choice:\t"; // enter choice either 1 or 2
    cin >> n;

    if (n == 1)
    {
        cout << "\nEnter temprature in Celcius:\t";
        cin >> num1;
        result = (num1 * 1.8) + 32;
        cout << "\nIn Fahrenheit:\t" << result;
    }
    if (n == 2)
    {
        cout << "\nEnter temprature in Fahrenheit:\t";
        cin >> num1;
        result = (num1 - 32) / 1.8;
        cout << "\nIn Celcius:\t" << result;
    }
    else
        cout << "Invalid choice" << endl;
    return 0;
}

