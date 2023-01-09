#include <iostream>
using namespace std;

// using recursion
int find_gcdr(int num1, int num2)
{
    return num2 == 0 ? num1 : find_gcdr(num2, num1 % num2);
}

// using iteration
int find_gcdi(int num1, int num2)
{
    while (num1 % num2 != 0)
    {
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    return num2;
}
int main(int argc, char **argv)
{
    int num1, num2;
    cin >> num1 >> num2;

    // int gcd = find_gcdi(num1, num2);
    int gcd = find_gcdr(num1, num2);
    int lcm = (num1 * num2) / gcd;

    cout << gcd << endl
         << lcm;
    return 0;
}