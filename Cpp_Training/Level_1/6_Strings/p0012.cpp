/*
    1. You are given a string. 
    2. You have to print all palindromic substrings of the given string.
*/
#include <iostream>
#include <string>

using namespace std;

bool isPallindrome(string s)
{
    int first = 0;
    int last = s.length() - 1;

    while (first <= last)
    {

        if (s.at(first) == s.at(last))
        {
            first++;
            last--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

void pallindromic_substrings(string s)
{

    for (auto i = 0; i < s.length(); i++)
    {
        for (auto j = 1; j <= s.length() - i; j++)
        {
            if(isPallindrome(s.substr(i,j))){
                cout << s.substr(i, j) << endl;
            }
        }
    }
}

int main()
{
    string str{};
    getline(cin, str);

    pallindromic_substrings(str);
    cout << endl;
    return 0;
}