#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf)
{
    if (ques.length() == 0)
    {
        cout << asf << endl;
        return;
    }
    char first = ques.at(0);
    string ros = ques.substr(1);

    string code = codes[first - '0'];

    for (int i = 0; i < code.length(); i++)
    {
        char ch = code.at(i);
        printKPC(ros, asf + ch);
    }
}

int main()
{
    string str;
    cin >> str;
    printKPC(str, "");
}