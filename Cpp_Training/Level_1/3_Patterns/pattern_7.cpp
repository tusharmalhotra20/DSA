/*Print the following pattern*/

/*

                                *
                        *
                *
        *
*

*/

#include <iostream>

using namespace std;

void p1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            cout << "\t";
        }
        cout << "*";
        cout << endl;
    }
}

// loop controlling strategy
void p2(int n)
{
    int init_space{n - 1};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < init_space; j++)
        {
            cout << "\t";
        }
        cout << "*";
        init_space--;
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
    return 0;
}