/*Print the following patterns*/

/*

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
---------------------

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
---------------------

1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
---------------------

A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
---------------------
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
---------------------

A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
---------------------

A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
*/

#include <iostream>

using namespace std;

void pattern_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
        for (int j = n; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_3(int n)
{
    int counter = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << counter << " ";
            ++counter;
        }
        cout << endl;
    }
}

void pattern_4(int n)
{
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
        }
        ++ch;
        cout << endl;
    }
}

void pattern_5(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ++ch;
        }
        cout << endl;
    }
}

void pattern_6(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ++ch;
        }
        cout << endl;
    }
}

void pattern_7(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch += i;
        for (int j = 0; j < n; j++)
        {
            cout << ch++ << " ";
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
    return 0;
}