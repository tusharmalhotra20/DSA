#include <iostream>
#include <string>

using namespace std;

bool validate(string str)
{
    if (str.empty())
        return;

    for (int i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= '0' && str[i] <= '9') && !(str[i] == ' '))
            return false;
    }
    return true;
}

int main()
{
    string str{};

    getline(cin, str);

    cout << validate(str) << endl;

    return 0;
}