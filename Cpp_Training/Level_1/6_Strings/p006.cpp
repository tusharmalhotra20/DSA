/*
    1. You are given a string.
    2. You have to validate it. 
    3. validation criteria- string should contain alphanumeric characters only.
    4. blank spaces are allowed in between the string.
    For e.g. 
        i/p: X Æ A-Xii
        o/p: false
        i/p: Joe Rogan8
        o/p: true
*/
#include <iostream>
#include <string>

using namespace std;

bool validate(string str)
{
    if (str.empty())
        return false;

    for (int i = 0; i < str.length(); i++)
        if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= '0' && str[i] <= '9') && !(str[i] == ' '))
            return false;
    
    return true;
}

int main()
{
    string str{};

    getline(cin, str);
    cout<<boolalpha;
    cout << validate(str) << endl;

    return 0;
}