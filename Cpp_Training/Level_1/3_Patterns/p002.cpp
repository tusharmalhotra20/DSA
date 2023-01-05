/*
Print table of the number 'n'
format:
x * 1 = 1x
x * 2 = 2x
x * 3 = 3x
x * 4 = 4x
x * 5 = 5x
x * 6 = 6x
x * 7 = 7x
x * 8 = 8x
x * 9 = 9x
x * 10 = 10x

*/

#include <iostream>

using namespace std;

void p1(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " "
             << "*"
             << " " << i << " "
             << "="
             << " " << n * i << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    p1(n);
    return 0;
}
