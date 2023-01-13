/*
    WAF that returns the length of a string.
*/
#include <iostream>
#include <string>

using namespace std;

int length(string s)
{
    if (s == "")
        return '\0';

    int count{};
    for (auto i : s)
        count += 1;

    return count;
}

int main()
{
    string str{};
    getline(cin, str);

    // my-function
    cout << length(str) << endl;
    // in-built method
    cout << str.length() << endl;

    return 0;
}