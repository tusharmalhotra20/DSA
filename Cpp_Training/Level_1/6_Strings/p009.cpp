/*
        1. You are given a string. 
        2. You have to find duplicate characters in the string.
        Methods:
                a. using loops
                b. using hash table
                c. using bit method
        For e.g.
            i/p: maximilian
            o/p: a 2
                 i 3
                 m 2
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void find_duplicatesl(string str)
{
    if (str.empty())
        return;

    for (int i = 0; i < str.length(); i++)
    {
        int count{1};
        if (str[i] != -1)
        {
            for (int j = i + 1; j < str.length(); j++)
            {
                if (str[i] == str[j])
                {
                    count += 1;
                    str.at(j) = -1;
                }
                else
                    continue;
            }
        }
        if (count > 1)
            cout << str[i] << " " << count << endl;
    }
}
void find_duplicatesht(string str)
{
    if (str.empty())
        return;

    vector<int> ht(26, 0);

    for (int i = 0; i < str.length(); i++)
        ht[str.at(i) - 97] += 1;

    for (int i = 0; i < ht.size(); i++)
    {
        char temp{};
        if (ht[i] > 1)
        {
            temp = i + 97;
            cout << temp << " " << ht[i] << endl;
        }
    }
}
void find_duplicatesb(string str)
{
    if (str.empty())
        return;
     
}

int main()
{
    string str{};

    getline(cin, str);

    // find_duplicatesl(str);
    find_duplicatesht(str);
    // find_duplicatesb(str);
    return 0;
}
