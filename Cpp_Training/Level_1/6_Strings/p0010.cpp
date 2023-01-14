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