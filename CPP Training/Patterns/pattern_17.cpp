/*
Print the following pattern:

1                                                               1
1       2                                               2       1
1       2       3                               3       2       1
1       2       3       4               4       3       2       1
1       2       3       4       5       4       3       2       1
*/

#include <iostream>

using namespace std;

void pattern_1(int n)
{
    int space{2 * n - 3};
    int oval{1};

    for (int i = 0; i < n; i++)
    {
        int val{1};
        for (int j = 0; j < oval; j++)
        {
            cout << val++ << "\t";
        }
        for (int j = 0; j < space; j++)
        {
            cout << "\t";
        }
        if (i == n - 1)
        {
            oval--;
            val--;
        }
        for (int j = 0; j < oval; j++)
        {
            cout << --val << "\t";
        }
        cout << endl;
        oval++;
        space -= 2;
    }
}

int main()
{
    int n;
    cin >> n;

    pattern_1(n);
    cout << endl;

    return 0;
}