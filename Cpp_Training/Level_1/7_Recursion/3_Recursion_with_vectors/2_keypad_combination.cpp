#include <iostream>
#include <string>
#include <vector>

using namespace std;

string keys[]{".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

vector<string> getKPC(string s)
{
    if (s.length() == 0)
    {
        vector<string> empty_str;
        empty_str.push_back("");
        return empty_str;
    }

    char start_char = s.at(0);                            // 8
    string remaining_string = s.substr(1);                //"71"
    vector<string> sub_string = getKPC(remaining_string); //["ta", "tb", "tc","ua", "ub", "uc"]

    string key_code = keys[start_char - '0']; //[56-48]
    vector<string> result;
    for (int i = 0; i < key_code.length(); i++)
    {
        char key_code_char = key_code.at(i);

        for (auto ch : sub_string)
        {
            result.push_back(key_code_char + ch);
        }
    }
    return result;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = getKPC(s);
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