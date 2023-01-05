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