#include <iostream>
using namespace std;

void printPermutations(string str, string asf)
{
    if (str.length() == 0)
    {
        cout << asf << endl;
        return;
    }

    for (auto i = 0; i < str.length(); i++)
    {
        string temp{str};
        char first = temp.at(i);
        string ros = temp.erase(i, 1);

        printPermutations(ros, asf + first);
    }
}

int main()
{
    string str;
    cin >> str;
    printPermutations(str, "");

    return 0;
}