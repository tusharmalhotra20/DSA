/*
    WAF that checks whether the input string is pallindrome or not.
    For e.g.
        i/p: abcba
        o/p: true
        i/p: string
        o/p: false
*/
#include <iostream>
#include <string>

using namespace std;

bool pallindrome(string str)
{
    if (str.empty())
        return false;

    int start{0}, last = str.length() - 1;

    for (start, last; start <= last; start++, last--)
        if (str.at(start) != str.at(last))
            return false;

    return true;
}

int main()
{
    string str{};

    getline(cin, str);
    cout << boolalpha;
    cout << pallindrome(str) << endl;
    return 0;
}