/*A program to accept a number and print it's cube*/

#include <iostream>

using namespace std;

int main()
{
    int n, cube;

    cin >> n;

    cube = n * n * n;

    cout << "The cube of given number is:\t" << cube;

    return 0;
}