/*
    WAf that checks whether the input string is an anagram or not.
    For e.g.
        i/p: medical decimal
        o/p: true
        i/p: street smart
        o/p: false
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool anagram(string str, string line)
{
    if (str.empty() || line.empty())
        return false;

    if (str.length() != line.length())
        return false;

    vector<int> ht(26, 0);

    for (int i = 0; i < str.length(); i++)
        ht[str.at(i) - 97] += 1;

    for (int i = 0; i < str.length(); i++)
        ht[line.at(i) - 97] -= 1;

    for (int i = 0; i < ht.size(); i++)
        if (ht[i] > 0)
            return false;

    return true;
}
int main()
{
    string str{}, line{};

    getline(cin, str);
    getline(cin, line);

    cout << boolalpha;
    cout << anagram(str, line) << endl;

    return 0;
}