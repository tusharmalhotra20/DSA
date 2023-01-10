/*
    Digits Of A Number
        1. You've to display the digits of a number.
        2. Take as input "n", the number for which digits have to be displayed.
        3. Print the digits of the number line-wise.
    
    TC: O(n)
*/

#include <iostream>
using namespace std;

void print_digits(long long int num)
{
    long long int temp{num}, mul{1};

    while (temp)
    {
        temp /= 10;
        mul *= 10;
    }
    mul /= 10;
    temp = num;
    while (mul != 0)
    {
        cout << temp / mul << endl;
        temp %= mul;
        mul /= 10;
    }
}

int main()
{
    long long int num{};
    cin >> num;
    print_digits(num);
    return 0;
}
