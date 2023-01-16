/*
    1. You are given a string.
    2. You have to count total number of vowels & consonants in it.
        For e.g.    i/p: aeiou
                    o/p: 5
                         0
                    i/p: abcdef
                    o/p: 2
                         4
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void vc_count(string str)
{
    if (str.empty())
        return;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int vowel_count{};
    for (auto ch : str)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowel_count += 1;

    // number of vowels
    cout << vowel_count << endl;
    
    // number of consonants
    cout << str.length() - vowel_count << endl;
}

int main()
{
    string str{};

    getline(cin, str);

    vc_count(str);

    return 0;
}