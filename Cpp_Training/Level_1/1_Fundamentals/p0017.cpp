/*Enter two numbers and swap both the numbers without using empty variable*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "\nEnter 1st number:\t";
    cin >> a;
    cout << "\nEnter 2nd number:\t";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nFirst number:\t" << a;
    cout << "\nSecond number:\t" << b;

    return 0;
}
