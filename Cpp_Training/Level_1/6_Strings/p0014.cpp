/*
    1. You are given a string that contains only lowercase and uppercase alphabets.
    2. You have to form a string that contains the difference of ASCII values of every two consecutive characters between those characters.
        For "abecd", the answer should be "a1b3e-2c1d", as
            'b'-'a' = 1
            'e'-'b' = 3
            'c'-'e' = -2
            'd'-'c' = 1
*/

#include <iostream>
#include <string.h>

using namespace std;

void printstr(string str)
{
    // write your code here
    string new_string{str.at(0)};
    int diff{};

    for (int i = 1; i < str.length(); i++)
    {
        char curr = str.at(i);
        char prev = str.at(i - 1);

        diff = curr - prev;

        new_string += to_string(diff);
        new_string += curr;
    }
    cout << new_string;
}
int main()
{
    string str;
    getline(cin, str);
    printstr(str);
    return 0;
}