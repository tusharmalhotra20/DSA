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
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowel_count += 1;
    }

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