/*
Print the following patterns:

                        *
                *       *       *
        *       *       *       *       *
*       *       *       *       *       *       *

-----------------------------------------------------------

*       *       *       *       *       *       *
        *       *       *       *       *
                *       *       *
                        *
*/

#include <iostream>

using namespace std;

void pattern_1(int n)
{

    int sp{n / 2};
    int st{1};
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < sp; j++)
        {
            cout << "\t";
        }
        for (int j = 0; j < st; j++)
        {
            cout << "*\t";
        }
        sp--;
        st += 2;
        cout << endl;
    }
}

void pattern_2(int n)
{
    int space{0};
    int stars{n};

    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << "\t";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*\t";
        }
        space++;
        stars -= 2;
        cout << endl;
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