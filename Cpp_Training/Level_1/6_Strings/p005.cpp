/*
    1. You are given a string.
    2. You have to count total number of words present in it.
    For e.g. 
        i/p: Tony stark is genius, billionaire, playboy, philanthropist.
        o/p: 7
*/
#include <iostream>
#include <string>

using namespace std;

int count_words(string str)
{
    if (str.empty())
        return 0;    

    int count{1};
    // to avoid any space before the string
    if (str[0] == ' ')
        count -= 1;

    // only check for spaces in-between the strings
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i - 1] != ' ')
            count += 1;
    }
    
    // to avoid any space after the string
    if (str[str.length() - 1] == ' ')
        count -= 1;

    return count;
}

int main()
{
    string str{};

    getline(cin, str);

    cout << count_words(str) << endl;
    return 0;
}