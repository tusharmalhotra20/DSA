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