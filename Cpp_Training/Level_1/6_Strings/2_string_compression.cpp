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