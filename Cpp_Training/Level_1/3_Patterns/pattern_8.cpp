/*Print the following pattern*/

/*

*                               *
        *               *
                *
        *               *
*                               *

*/

#include <iostream>

using namespace std;

void p1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j) || (i + j == n - 1))
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n; // n is odd
    cin >> n;

    p1(n);

    return 0;
}