/*
     1. You are given a string.
     2. You have to write a function that returns its length.
        For e.g.    i/p: tushar
                    o/p: 6
*/
#include <iostream>
#include <string>

using namespace std;

int length(string str)
{
    if (str.empty())
        return 0;

    int count{};
    for (auto i : str)
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