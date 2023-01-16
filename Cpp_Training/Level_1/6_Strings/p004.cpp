/*
    1. You are given a string.
    2. You have to toggle its characters case-
        a. changing original string
        b. without changing original string
    For e.g. 
            i/p: tOGgLe 
            o/p: TogGlE
*/
#include <iostream>
#include <string>

using namespace std;

void toggle(string &str)
{
    if (str.empty())
        return;

    for (auto &ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        else
            ch += 32;
    }
}
string togglew(string str)
{
    if (str.empty())
        return "";

    for (auto &ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        else
            ch += 32;
    }
    return str;
}

int main()
{
    string str{};

    // change in original string
    getline(cin, str);
    toggle(str);
    cout << str << endl;

    // without change in original string
    getline(cin, str);
    cout << togglew(str) << endl;
    cout << str << endl;

    return 0;
}