/*Print the following patterns*/

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
---------------------

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
---------------------

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
---------------------

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
---------------------

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
---------------------

0
1 1
2 3 5
8 13 21 34
55 89 144 233 377
---------------------

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
---------------------

A
B C
D E F
G H I J
K L M N O
---------------------

A
B C
C D E
D E F G
E F G H I
---------------------

E
D E
C D E
B C D E
A B C D E
---------------------

A
B B
C C C
D D D D
E E E E E

*/
#include <iostream>

using namespace std;

void pattern_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void pattern_3(int n)
{
    int counter = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << counter++ << " ";
        }
        cout << endl;
    }
}

void pattern_4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (i + 1 + j) << " ";
        }
        cout << endl;
    }
}

void pattern_5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (i + 1 - j) << " ";
        }
        cout << endl;
    }
}

void pattern_6(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
            int c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
}

void pattern_7(int n)
{
    for (int i = 0; i < n; i++)
    {
        int iCj = 1; // initial value of every row is 1.
        for (int j = 0; j <= i; j++)
        {
            cout << iCj << " ";
            int iCjp1 = (iCj * (i - j)) / (j + 1); // calculating next value using prev. value
            iCj = iCjp1;
        }
        cout << endl;
    }
}

void pattern_8(int n)
{
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

void pattern_9(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch += i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

void pattern_10(int n)
{

    for (int i = n - 1; i >= 0; i--)
    {
        char ch = 'A';
        ch += i;
        for (int j = n - 1; j >= i; j--)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

void pattern_11(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch += i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
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
    pattern_3(n);
    cout << endl;
    pattern_4(n);
    cout << endl;
    pattern_5(n);
    cout << endl;
    pattern_6(n);
    cout << endl;
    pattern_7(n);
    cout << endl;
    pattern_8(n);
    cout << endl;
    pattern_9(n);
    cout << endl;
    pattern_10(n);
    cout << endl;
    pattern_11(n);
    cout << endl;

    return 0;
}