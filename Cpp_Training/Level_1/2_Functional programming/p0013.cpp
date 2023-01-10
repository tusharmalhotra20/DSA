/*
    Find GCD & LCM of two numbers
        1. You are required to print the Greatest Common Divisor (GCD) of two numbers.
        2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers.
        3. Take input "num1" and "num2" as the two numbers.
        4. Print their GCD and LCM.
*/

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