/*A program to read radius of circle, calculate area and perimeter and display them.*/

#include <iostream>

using namespace std;

int main()
{
    float ar, pr, r;

    cout << "Enter Radius:\t";
    cin >> r;

    ar = 3.14 * r * r;
    cout << "\n\nArea of circle:\t" << ar;
    ar = 3.14 * r * r;
    pr = 2 * 3.14 * r;
    cout << "\nPerimeter of circle:\t" << pr;
    pr = 2 * 3.14 * r;

    return 0;
}
