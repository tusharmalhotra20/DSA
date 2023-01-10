/*
    Count Digits In A Number
        1. You've to count the number of digits in a number.
        2. Take as input "n", the number for which the digits has to be counted.
        3. Print the digits in that number.

    TC: O(n)
*/
#include <iostream>
using namespace std;

void count_digits(int num)
{
    int count{};
    while (num)
    {
        count += 1;
        num /= 10;
    }
    cout << count << endl;
}

int main()
{
    int num{};
    cin >> num;

    count_digits(num);
    return 0;
}