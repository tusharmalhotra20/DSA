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
    // find_duplicatesht(str);
    find_duplicatesb(str);
    return 0;
}
