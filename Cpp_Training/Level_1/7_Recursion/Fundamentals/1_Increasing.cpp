/*
1. You are given a positive number n.
2. You are required to print the counting from 1 to n, using recursion.
3. You are required to not use any loops. Complete the body of printIncreasing function to achieve it.
*/

#include <iostream>
using namespace std;

void printIncreasing(int n)
{
    // write your code here
    if (n > 0)
    {
        printIncreasing(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printIncreasing(n);
}
