/*
    WAF that takes your name as input and output a greeting message to functional programming.

    Input: "Tushar"
    Output: Hello Tushar, Welcome to Functional programming
    TC: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

void greet(string s)
{
    cout << "Hello " << s << ", "
         << "Welcome to Functional programming";
}
int main()
{

    string name;
    getline(cin, name);
    greet(name);
    return 0;
}