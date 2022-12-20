/*
Print the following pattern:

                                1
                        2       1       2
                3       2       1       2       3
        4       3       2       1       2       3       4
5       4       3       2       1       2       3       4       5

*/

#include <iostream>

using namespace std;

void pattern_1(int n)
{
    int space{n - 1};
    int num{1};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << "\t";
        }
        int val{i + 1};
        for (int j = 0; j < num; j++)
        {
            cout << val << "\t";
            if (j < num / 2)
                val--;
            else
                val++;
        }
        cout << endl;
        space--;
        num += 2;
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