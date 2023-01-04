// Rotate by 90deg
#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cin >> mat[i][j];
        }
    }
}

void rotateMat(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = mat[0].size() - 1; j >= 0; j--)
        {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << boolalpha;
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    input(mat);
    rotateMat(mat);

    cout << endl;
    return 0;
}