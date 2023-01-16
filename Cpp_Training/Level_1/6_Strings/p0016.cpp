/*
    1. You are given a string. 
    2. You have to print all permutations of the given string iteratively.
*/

#include <iostream>
#include <string>
using namespace std;

int factorial(int n)
{
    int val{1};

    for (int i = 2; i <= n; i++)
    {
        val *= i;
    }
    return val;
}

void printallperm(string str)
{
    // write your code here
    int len = str.length();
    int fact = factorial(len);

    for (int i = 0; i < fact; i++)
    {
        string reusable_str = str;
        int temp = i;
        for (int div = len; div >= 1; div--)
        {
            int quot = temp / div;
            int rem = temp % div;

            cout << reusable_str.at(rem);
            reusable_str.erase(rem, 1);

            temp = quot;
        }
        cout << endl;
    }
}
int main()
{
    string str;
    getline(cin, str);

    printallperm(str);
}