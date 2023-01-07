/*
    Fibonacci sequence: It is a sequence in which each number is the sum of the two preceding ones. The sequence commonly starts from 0 and 1.

    Print Fibonacci Numbers Till N
        1. You've to print first n fibonacci numbers.
        2. Take as input "n", the count of fibonacci numbers to print.
        3. Print first n fibonacci numbers.
*/

#include <iostream>
using namespace std;

void print_fibonacci(int num)
{
    int first{0}, second{1}, third{};

    for (int i = 1; i <= num; i++)
    {
        cout << first << " ";
        third = first + second;
        first = second;
        second = third;
    }
}

int main()
{
    int num{};
    cin >> num;

    print_fibonacci(num);

    return 0;
}