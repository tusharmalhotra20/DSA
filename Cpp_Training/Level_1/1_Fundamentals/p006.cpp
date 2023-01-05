/*A program to input any integer and display its first three multiples. */

#include <iostream>

using namespace std;

int main()
{
    int no, m1, m2, m3;

    cin >> no;

    m1 = 1 * no;
    m2 = 2 * no;
    m3 = 3 * no;

    cout << "First three multiples of a given number are:\t" << m1 << "\t" << m2 << "\t" << m3;

    return 0;
}
