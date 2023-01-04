/*
1. You are given a number x.
2. You are given another number n.
3. You are required to calculate x raised to the power n. Don't change the signature of power function.

*/
#include <iostream>
using namespace std;

int powerLogarithmic(int x, int n)
{
    // write your code here
    if (n == 0)
    {
        return 1;
    }
    int x_nby2 = powerLogarithmic(x, n / 2);
    int x_n = x_nby2 * x_nby2;

    if (n % 2 == 1)
    {
        x_n = x_n * x;
    }
    return x_n;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << powerLogarithmic(x, n);
}