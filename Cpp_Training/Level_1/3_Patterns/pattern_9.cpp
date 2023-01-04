/*Print the following pattern*/

/*
 
*       *       *       *       *
*                               *
*                               *
*                               *
*       *       *       *       *

 */

#include <iostream>

using namespace std;

void p1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 || i == n - 1 || j == 0 || j == n - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}


int main()
{

    int n;
    cin >> n;

    p1(n);
    cout<<endl;

    return 0;
}