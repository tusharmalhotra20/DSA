/*
Print the following pattern:

                        1
                2       3       2
        3       4       5       4       3
4       5       6       7       6       5       4
        3       4       5       4       3
                2       3       2
                        1
------------------------------------------------------
                        A
                B       B       B
        C       C       C       C       C
D       D       D       D       D       D       D
        C       C       C       C       C
                B       B       B
                        A
*/

#include <iostream>

using namespace std;

void pattern_1(int n)
{
    int space{n / 2};
    int num{1};
    int oval = 1;
    for (int i = 0; i < n; i++)
    {
        int val = oval;
        for (int j = 0; j < space; j++)
        {
            cout << "\t";
        }
        for (int j = 0; j < num; j++)
        {
            cout << val << "\t";
            if (j < num / 2)
                val++;
            else
                val--;
        }
        cout << endl;
        if (i < n / 2)
        {
            oval++;
            space--;
            num += 2;
        }
        else
        {
            oval--;
            space++;
            num -= 2;
        }
    }
}

void pattern_2(int n)
{
    int space{n / 2};
    int num{1};
    char ochar = 'A';
    for (int i = 0; i < n; i++)
    {
        char ch = ochar;
        for (int j = 0; j < space; j++)
        {
            cout << "\t";
        }
        for (int j = 0; j < num; j++)
        {
            cout << ch << "\t";
        }
        cout << endl;
        if (i < n / 2)
        {
            ochar++;
            space--;
            num += 2;
        }
        else
        {
            ochar--;
            space++;
            num -= 2;
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