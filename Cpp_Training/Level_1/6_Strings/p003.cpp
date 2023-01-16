/*
    1. You are given a string.
    2. You have to change it into-
        a. upper case
            - changing original string
            - without changing original string
        b. lower case
            - changing original string
            - without changing original string
    
    For e.g. i/p: tushar
             o/p: TUSHAR
*/
#include <iostream>
#include <string>

using namespace std;

void to_upper(string &str)
{
    if (str.empty())
        return;

    for (auto &ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
    }
}

void to_lower(string &str)
{
    if (str.empty())
        return;

    for (auto &ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
    }
}

string to_upperw(string str)
{
    if (str.empty())
        return "";

    for (auto &ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
    }
    return str;
}

string to_lowerw(string str)
{
    if (str.empty())
        return "";

    for (auto &ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
    }
    return str;
}
int main()
{
    string str{};

    // changing the original string
    getline(cin, str);
    to_upper(str);
    // original string changed
    cout << str << endl;
    to_lower(str);
    // original string changed
    cout << str << endl;

    // without changing the original string
    getline(cin, str);
    cout << to_upperw(str) << endl;
    cout << to_lowerw(str) << endl;
    // original remained same
    cout << str << endl;

    return 0;
}