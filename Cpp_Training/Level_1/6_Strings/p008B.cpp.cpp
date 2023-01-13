#include <iostream>

using namespace std;
char temp[20];
char *reverse_string_aux(char *s)
{
    int i{0}, j{0};
    for (i; s[i] != '\0'; i++)
    {
    }
    i = i - 1;

    for (j; i >= 0; i--, j++)
        temp[j] = s[i];

    return temp;
}
void reverse_string_swap(char *s)
{
    int i{0}, j{0};
    char temp;
    for (j; s[j] != '\0'; j++)
    {
    }
    j = j - 1;

    for (i; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
int main()
{
    char s[] = "Reverse me";

    cout << "Original string is:\t" << s << endl;
    const char *cptr = reverse_string_aux(s);
    cout << "Reversed string is:\t" << cptr << endl;

    cout << "Original string is:\t" << s << endl;
    reverse_string_swap(s);
    cout << "Reversed string is:\t" << s << endl;
    cout << endl;
    return 0;
}