#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
    // declaration & initialization
    // string name{};  //empty string
    // string full_name{"Tushar Malhotra"};

    // // print to console
    // cout << name << endl;
    // cout << full_name;

    // I/O
    // string name{};
    // string friend_name{};
    // getline(cin, name);
    // getline(cin, friend_name);
    // cout << name << endl
    //      << friend_name;

    // Traversing a string
    // string str{};
    // getline(cin, str);
    // cout << "printing string character by character:" << endl;
    // for (auto &ch : str)
    // {
    //     cout << ch << endl;
    // }

    // All substrings of a string
    // string str{"abccbc"};
    // cout << str.length();
    // cout << "All sub-strings of /'abcd/'" << endl;
    // for (auto i = 0; i < str.length(); i++)
    // {
    //     for (auto j = 1; j <= str.length() - i; j++)
    //     {
    //         // cout << str.substr(i, j) << endl;
    //         cout << i << " " << j << endl;
    //     }
    // }

    // Element access methods: front(), back(), at()
    // string str{"n"};
    // cout<<str.back()<<endl;
    // cout<<str.front()<<endl;
    // str.at(0) = 'z';
    // cout<<str.substr(1);
    // string aa = "tushar";
    // char ch = 'A';

    // char ch = aa.at(4);

    // aa += ch;
    // cout<<aa;
    // cout<<aa.at(2)-32;
    // cout << typeid(aa.substr(0,3)).name() << endl;
    string keys[]{".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    char num = '8';
    cout << keys[num - '0'];

    return 0;
}