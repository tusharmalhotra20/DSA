/*
Print the following patterns:

                        *
                *       *       *
        *       *       *       *       *        
*       *       *       *       *       *       *
        *       *       *       *       *        
                *       *       *
                        *
-----------------------------------------------------------
                        *
                *               *
        *                               *        
*                                               *
        *                               *        
                *               *
                        *
*/



#include <iostream>
using namespace std;

void pattern_1(int n)
{
    int init_space{n / 2};
    int init_stars{1};

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < init_space; k++)
        {
            cout << "\t";
        }
        for (int j = 0; j < init_stars; j++)
        {
            cout << "*\t";
        }
        cout << endl;
        if (i < n / 2)
        {
            init_space--;
            init_stars += 2;
        }
        else
        {
            init_space++;
            init_stars -= 2;
        }
    }
}

void pattern_2(int n)
{
    int ospace{n / 2};
    int ispace{0};

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < ospace; k++)
        {
            cout << "\t";
        }
        cout << "*";
        for (int j = 0; j < ispace; j++)
        {
            cout << "\t";
        }
        if (i != 0 && i != n - 1)
        {

            cout << "*";
        }
        cout << endl;
        if (i < n / 2)
        {
            ospace--;
            ispace += 2;
        }
        else
        {
            ospace++;
            ispace -= 2;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    pattern_1(n);
    cout << endl;
    pattern_2(n);
    cout << endl;
    return 0;
}