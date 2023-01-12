#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc)
{
    // Write your code here

    if(sc == dc && sr == dr){
        vector<string> empty_ans{""};
        return empty_ans;
    }

    vector<string> paths;
    //  horizontal moves
    for (int ms = 1; ms <= dc - sc; ms++)
    {
        vector<string> hpaths = get_maze_paths(sr, sc + ms, dr, dc);
        for (auto hpath : hpaths)
        {
            paths.push_back("h" + to_string(ms) + hpath);
        }
    }

    //  vertical moves
    for (int ms = 1; ms <= dr - sr; ms++)
    {
        vector<string> vpaths = get_maze_paths(sr + ms, sc, dr, dc);
        for (auto vpath : vpaths)
        {
            paths.push_back("v" + to_string(ms) + vpath);
        }
    }

    //  diagonal moves
    for (int ms = 1; ms <= dr - sr && ms <= dc - sc; ms++)
    {
        vector<string> dpaths = get_maze_paths(sr + ms, sc + ms, dr, dc);
        for (auto dpath : dpaths)
        {
            paths.push_back("d" + to_string(ms) + dpath);
        }
    }

    return paths;
}

void display(vector<string> &arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i < arr.size() - 1)
            cout << ", ";
    }

    cout << "]" << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> ans = get_maze_paths(0, 0, n - 1, m - 1);
    display(ans);

    return 0;
}