#include <iostream>

using namespace std;

// int length_of_string(char *s)
// {
//     int i{0};
//     for (i; s[i] != '\0'; i++)
//     {
//     }

//     return i;
// }
void vc_count(char *s, int &vcount, int &ccount)
{
    int i{0};
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vcount++;
        }
        else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            ccount++;
        }
    }
}
void change_to_upper(char *s)
{
    int i{0};
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
}
void change_to_lower(char *s)
{
    int i{0};
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
}
void toggle_case(char *s)
{
    int i{0};
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        else if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
}
int count_words(char *s)
{
    int word{1};
    int i{0};
    for (i; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i - 1] != ' ')
            word++;
    }
    return word;
}
bool validate_string(char *s)
{
    int i{0};
    for (i; s[i] != '\0'; i++)
    {
        if (!(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 48 && s[i] <= 57))
            return false;
    }
    return true;
}
int main()
{
    //finding length of strings
    // char str[] = "Tushar Malhotra";
    // cout << "The length of " << str << " is:\t" << length_of_string(str) << endl;
    // cout << endl;

    //counting vowels and consonants in a string
    int vcount{0}, ccount{0};
    vc_count(str, vcount, ccount);
    cout << "Total number of vowels in " << str << " :\t" << vcount << endl;
    cout << "Total number of consonants in " << str << " :\t" << ccount << endl;
    cout << endl;

    //change the string to upper case
    cout << "Original string:\t" << str << endl;
    change_to_upper(str);
    cout << "Changed to upper:\t" << str << endl;
    cout << endl;

    //change the string to lower case
    cout << "Original string:\t" << str << endl;
    change_to_lower(str);
    cout << "Changed to lower:\t" << str << endl;
    cout << endl;

    //toggle the case of characters in a string
    char temp_str[] = "rAndOm LEtTErS 5dE6";
    cout << "Before toggling:\t" << temp_str << endl;
    toggle_case(temp_str);
    cout << "After toggling:\t" << temp_str << endl;
    cout << endl;

    //count number of words
    cout << "Total number of words in " << str << " is " << count_words(str) << endl;
    cout << "Total number of words in " << temp_str << " is " << count_words(temp_str) << endl;
    cout << endl;

    //validate a string- should contain only alphanumeric keys
    if (validate_string(str))
        cout << "Valid string" << endl;
    else
        cout << "Invalid string" << endl; //because string has space in between

    if (validate_string(temp_str))
        cout << "Valid string" << endl;
    else
        cout << "Invalid string" << endl; //because string has space in between

    cout << endl;
    return 0;
}