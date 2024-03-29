#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> get_stair_paths(int n)
{
    // Write your code here
    if (n == 0)
    {
        vector<string> destination{""};
        return destination;
    }
    else if (n < 0)
    {
        vector<string> below_destination;
        return below_destination;
    }

    vector<string> paths1 = get_stair_paths(n - 1);
    vector<string> paths2 = get_stair_paths(n - 2);
    vector<string> paths3 = get_stair_paths(n - 3);

    vector<string> paths;

    for (auto path : paths1)
        paths.push_back("1" + path);

    for (auto path : paths2)
        paths.push_back("2" + path);

    for (auto path : paths3)
        paths.push_back("3" + path);

    return paths;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = get_stair_paths(n);
    int cnt = 0;

    cout << '[';
    for (string str : ans)
    {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}