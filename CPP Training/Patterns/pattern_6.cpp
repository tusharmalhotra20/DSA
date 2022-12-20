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
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
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
    int init_space{0};

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < init_space; space++)
        {
            cout << "\t";
        }
        cout << "*";
        init_space++;
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
    return 0;
}