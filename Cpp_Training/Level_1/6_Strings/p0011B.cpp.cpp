#include <iostream>

using namespace std;

bool Pallindrome_aux(const char *s)
{
    char temp[20];
    int i{0}, j{0};
    bool flag = false;
    for (i; s[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (i, j; i >= 0; i--, j++)
        temp[j] = s[i];
    temp[j] = '\0';
    for (i = 0, j = 0; (s[i] != '\0' && temp[j] != '\0'); i++, j++)
    {
        if (s[i] != temp[j])
            break;
        else
            flag = true;
    }
    return flag;
}
bool Pallindrome(const char *s)
{
    int i{0}, j{0};
    bool flag = false;
    for (j; s[j] != '\0'; j++)
    {
    }
    j = j - 1;
    for (i, j; i < j; i++, j--)
    {
        if (s[i] != s[j])
            break;
        else
            flag = true;
    }
    return flag;
}
int main()
{
    char str[] = "Rajat";

    if (Pallindrome_aux(str))
        cout << "pallindrome" << endl;
    else
        cout << "not pallindrome" << endl;

    if (Pallindrome(str))
        cout << "pallindrome" << endl;
    else
        cout << "not pallindrome" << endl;

    cout << endl;
    return 0;
}