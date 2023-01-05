/*A program to input a number. if the number is even, print its square otherwise print its cube.*/

#include <iostream>

using namespace std;

int main()
{
    int n, chk;

    cout << "Enter any number:\t";
    cin >> n;

    chk = n % 2 == 0 ? (n * n) : (n * n * n);

    cout << "Value:\t" << chk;

    return 0;
}