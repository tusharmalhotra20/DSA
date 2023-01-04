/*
subsequence:
    -for length 'n' there are 2^n subsequence are possible.
    -not necesseraily to be continious.

substring:
    -for length 'n' there are n(n+1)/2 substrings are possible.
    -necesseraily to be continious.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> gss(string s)
{
    // write your code here
    if (s.length() == 0)
    {
        vector<string> emp_string;
        emp_string.push_back("");
        return emp_string;
    }
    char starting_ch = s.at(0);
    string rest_of_string = s.substr(1);
    vector<string> substr_gss = gss(rest_of_string);
    vector<string> my_result;

    for (auto &ch : substr_gss)
        my_result.push_back("" + ch);

    for (auto &ch : substr_gss)
        my_result.push_back(starting_ch + ch);

    return my_result;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}