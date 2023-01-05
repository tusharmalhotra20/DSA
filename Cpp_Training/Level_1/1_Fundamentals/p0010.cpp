/*A program to compute the area and perimeter of a square.*/

#include <iostream>

using namespace std;

int main()
{
    float s, ar, pr;

    cout << "\nEnter side of square:\t";
    cin >> s;

    ar = s * s;
    pr = 4 * s;

    cout << "\nArea of square:\t" << ar;
    cout << "\nPerimeter of square:\t" << pr;

    return 0;
}