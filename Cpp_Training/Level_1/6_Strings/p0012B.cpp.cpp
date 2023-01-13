//anagrams are those strings, that are made from same set of characters.
//for eg. medical and decimal
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[] = "tushar";
    char str2[] = "lushar";
    int hash[26] = {0};
    int count{0};
    int l1 = strlen(str1);
    int l2 = strlen(str2);

    if (l1 != l2)
        cout << "not anagram" << endl;
    else
    {
        for (int i = 0; str1[i] != '\0'; i++)
        {
            hash[str1[i] - 97] += 1;
        }
        for (int j = 0; str2[j] != '\0'; j++)
        {
            hash[str2[j] - 97] -= 1;
        }
        for (int k = 0; hash[k] < 26; k++)
            if (hash[k] != 0)
            {
                count++;
                break;
            }
        if (count > 0)
            cout << "not anagram" << endl;
        else
            cout << "anagram" << endl;
    }
    cout << endl;
    return 0;
}