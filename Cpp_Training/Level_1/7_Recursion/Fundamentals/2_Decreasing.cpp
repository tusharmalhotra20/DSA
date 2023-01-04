/*
1. You are given a positive number n. 
2. You are required to print the counting from n to 1.
3. You are required to not use any loops. Complete the body of print Decreasing function to achieve it.
*/
#include <iostream>
using namespace std;

void printDecreasing(int n)
{
    // write your code here
    if (n >= 1)
    {
        cout << n << endl;
        printDecreasing(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    printDecreasing(n);
}
