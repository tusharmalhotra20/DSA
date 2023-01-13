//using hash table- assuming that string contains only lower case characters without white space.

#include <iostream>

using namespace std;

int main()
{
    char str[] = "hello";
    char temp;
    int hash[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        hash[str[i] - 97] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 0)
        {
            temp = i + 97;
            cout << "Character:\t" << temp << endl;
            cout << "count of character:\t" << hash[i] << endl;
        }
    }

    cout << endl;
    return 0;
}