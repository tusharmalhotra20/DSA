#include <iostream>
using namespace std;

void printSS(string ques, string ans)
{
    if (ques.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char first = ques.at(0);
    string ros = ques.substr(1);

    printSS(ros, ans + first);
    printSS(ros, ans + "");
}

int main()
{
    string str;
    cin >> str;
    printSS(str, "");
}