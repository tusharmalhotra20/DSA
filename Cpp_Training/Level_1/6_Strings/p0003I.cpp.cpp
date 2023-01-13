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