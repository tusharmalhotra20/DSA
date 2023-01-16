/*
    1. You are given a string.
    2. You have to compress the given string in the following two ways -

    First compression -> The string should be compressed such that consecutive duplicates of characters are replaced with a single character.
        For "aaabbccdee", the compressed string will be "abcde".

    Second compression -> The string should be compressed such that consecutive duplicates of characters are replaced with the character and followed by the number of consecutive duplicates.
        For "aaabbccdee", the compressed string will be "a3b2c2de2".
*/

#include <iostream>
#include <string.h>
using namespace std;

void String_compression01(string str)
{
    // write your code here

    string compressed{str.at(0)};
    for (int i = 1; i < str.length(); i++)
    {
        char current = str.at(i);
        char previous = str.at(i - 1);
        if (current != previous)
        {
            compressed += current;
        }
    }
    cout << compressed << endl;
}
void String_compression02(string str)
{
    // write your code here
    string compressed{str.at(0)};
    int count{1};
    for (int i = 1; i < str.length(); i++)
    {
        char current = str.at(i);
        char previous = str.at(i - 1);

        if (current == previous)
        {
            count++;
        }
        else
        {
            if (count > 1)
                compressed += to_string(count);
            compressed += current;
            count = 1;
        }
    }
    if (count > 1)
        compressed += to_string(count);
    cout << compressed << endl;
}

int main()
{
    string str;
    getline(cin, str);
    String_compression01(str);
    String_compression02(str);
    return 0;
}