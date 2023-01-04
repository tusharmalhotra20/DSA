/*A program to find area of triangle.*/

#include <iostream>

using namespace std;

int main()
{
    float b, h, ar;

    cout << "Enter base:\t";
    cin >> b;
    cout << "\nEnter height:\t";
    cin >> h;

    ar = 0.5 * b * h;

    cout << "\nThe area is:\t" << ar;

    return 0;
}