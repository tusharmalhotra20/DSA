/*Enter two numbers and swap both the numbers by using empty variable*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "\nEnter 1st number:\t";
    cin >> a;
    cout << "\nEnter 2nd number:\t";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "\nFirst number:\t" << a;
    cout << "\nSecond number:\t" << b;

    return 0;
}
