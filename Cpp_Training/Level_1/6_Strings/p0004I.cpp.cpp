#include <iostream>
#include <string>
using namespace std;

void togglecase(string str)
{
    // write your code here
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) >= 'a' && str.at(i) <= 'z')
        {
            str.at(i) -= 32;
        }
        else if (str.at(i) >= 'A' && str.at(i) <= 'Z')
        {
            str.at(i) += 32;
        }
    }
    cout<<str;
}

int main()
{
    string str;
    getline(cin, str);
    togglecase(str);
    return 0;
}