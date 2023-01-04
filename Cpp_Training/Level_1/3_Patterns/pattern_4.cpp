/*Print the following pattern*/

/*

                                *
                        *       *
                *       *       *
        *       *       *       *
*       *       *       *       *

 */

#include <iostream>

using namespace std;

void p1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "\t";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
}

// loop controlling strategy
void p2(int n)
{
    // loop controlling parameters
    int init_space{n - 1};
    int init_stars{1};

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < init_space; space++)
        {
            cout << "\t";
        }
        for (int stars = 0; stars < init_stars; stars++)
        {
            cout << "*\t";
        }
        init_space--;
        init_stars++;
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