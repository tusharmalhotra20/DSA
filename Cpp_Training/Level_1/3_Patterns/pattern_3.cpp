/*Print the following pattern*/

/*

*       *       *       *       *
*       *       *       *        
*       *       *
*       *
*

 */

#include <iostream>

using namespace std;

void p1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}

void p2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}

void p3(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > n - i; j--)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}
void p4(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    p1(n);
    cout << endl;
    p2(n);
    cout << endl;
    p3(n);
    cout << endl;
    p4(n);

    return 0;
}