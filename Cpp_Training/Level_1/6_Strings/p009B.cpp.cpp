#include <iostream>
#include <math.h>
using namespace std;

bool string_compare(const char *s1, const char *s2)
{
    int i{0}, j{0};
    bool flag = false;

    for (i; s1[i] != '\0'; i++)
    {
    }
    for (j; s2[j] != '\0'; j++)
    {
    }

    if (i == j)
    {
        for (i = 0, j = 0; (s1[i] != '\0' && s2[j] != '\0'); i++, j++)
        {
            if (s1[i] != s2[j])
            {
                flag = false;
                break;
            }
            else
                flag = true;
        }
    }
    return flag;
}
bool string_comparei(const char *s1, const char *s2)
{
    int i{0}, j{0};
    bool flag = false;

    for (i; s1[i] != '\0'; i++)
    {
    }
    for (j; s2[j] != '\0'; j++)
    {
    }
    if (i == j)
    {
        for (i = 0, j = 0; (s1[i] != '\0' && s2[j] != '\0'); i++, j++)
        {
            if ((s1[i] != s2[j]) && (abs(s1[i] - s2[j]) != 32))
            {
                flag = false;
                break;
            }
            else
                flag = true;
        }
    }

    return flag;
}

int main()
{

    if (string_compare("TuShar", "Tushar"))
        cout << "same" << endl;
    else
        cout << "not same" << endl;

    if (string_comparei("tusHar", "Tushar"))
        cout << "same" << endl;
    else
        cout << "not same" << endl;
    cout << endl;
    return 0;
}