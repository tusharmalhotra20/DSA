#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void vc_count(string s)
{
    if (s == "")
        return;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int vowel_count{};
    for (auto ch : s)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowel_count += 1;
    }

    // number of vowels
    cout << vowel_count << endl;
    // number of consonants
    cout << s.length() - vowel_count << endl;
}

int main()
{
    string str{};

    getline(cin, str);

    vc_count(str);

    return 0;
}