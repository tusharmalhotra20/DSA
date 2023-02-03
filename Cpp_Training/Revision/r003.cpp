#include <iostream>

using namespace std;

int count(int d)
{

    int c{0};
    while (d != 0)
    {
        ++c;
        d /= 10;
    }
    return c;
}

void printDigitsBack(int n)
{
    while (n != 0)
    {
        cout << n % 10 << endl;
        n /= 10;
    }
}

void printDigitsFront(int n)
{
    int temp{n}, mul{1};
    while (temp != 0)
    {
        mul *= 10;
        temp /= 10;
    }
    mul /= 10;
    temp = n;
    while (mul != 0)
    {
        cout << temp / mul << endl;
        temp %= mul;
        mul /= 10;
    }
}

void reverse(int num)
{
    int rev{0}, temp{num};

    while (temp != 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    cout << rev << endl;
}
int main()
{
    long digit{0};
    cin >> digit;

    // cout << count(digit) << endl;
    // printDigitsBack(digit);
    // cout << endl
    //      << endl;
    // printDigitsFront(digit);
    // reverse(digit);
    
    return 0;
}