/*
    Reverse A Number
        1. You've to display the digits of a number in reverse.
        2. Take as input "n", the number for which digits have to be display in reverse.
        3. Print the digits of the number line-wise, but in reverse order.

    TC: O(n)
*/

#include <iostream>
using namespace std;

void number_reversed(long int num)
{
    int rev_digit{}, temp{num};

    while (temp)
    {
        // At each iteration, taking out last digit from original number
        // and increasing its place value by 10 in next iteration. 
        rev_digit = (rev_digit * 10) + (temp % 10);

        // printing in reverse order
        cout << temp % 10 << endl;

        // reducing the size of num
        temp /= 10;
    }
}

int main(int argc, char **argv)
{
    long int num{};
    cin >> num;

    number_reversed(num);
    return 0;
}