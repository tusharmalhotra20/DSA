/*
    1. You are given a string.
    2. You have to reverse that string using-
        a. auxiliary string
        b. without auxiliary string
    For e.g.
        i/p:  school
        o/p:  loohcs  
*/
#include <iostream>
#include <string>

using namespace std;

void reversea(string &str)
{
    if (str.empty())
        return;

    string aux{};
    for (int i = str.length() - 1; i >= 0; i--)
        aux += str[i];

    str = aux;
}
void reverse(string &str)
{
    if (str.empty())
        return;

    for (int i = 0, j = str.length() - 1; i <= j; i++, j--)
    {
        char temp = str.at(i);
        str.at(i) = str.at(j);
        str.at(j) = temp;
    }
}

int main()
{
    string str{};

    // reversing a string using an auxilary string
    getline(cin, str);
    reversea(str);
    cout << str << endl;

    // reversing a string without using an auxilary string
    getline(cin, str);
    reverse(str);
    cout << str << endl;

    return 0;
}