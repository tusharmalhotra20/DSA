/*
     1. You are given two strings.
     2. You have to compare them, whether they are equal or not.  
     For e.g.
        i/p: calendar
             Calendar
        o/p: false
*/
#include <iostream>
#include <string>

using namespace std;

bool compare(string str, string line)
{
    // empty strings can't be compared.
    if (str.empty() || line.empty())
        return false;

    // if length of strings is not same, no point of comparing them.
    if (str.length() != line.length())
        return false;

    if (str.compare(line) == 0)
        return true;
}

int main()
{
    string str{}, line{};

    getline(cin, str);
    getline(cin, line);
    cout << boolalpha;
    cout << compare(str, line) << endl;
    return 0;
}