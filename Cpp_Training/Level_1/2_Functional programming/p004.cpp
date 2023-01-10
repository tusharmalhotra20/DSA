/*
    WAF that takes two numbers as input and swap both the numbers without using empty variable.(using call by reference)

    Input: 17 63

    Output: 63
            17
    
    TC: O(1)
*/

#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}
int main()
{
    int num1{}, num2{};

    cin >> num1 >> num2;

    swap(num1, num2);

    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}
