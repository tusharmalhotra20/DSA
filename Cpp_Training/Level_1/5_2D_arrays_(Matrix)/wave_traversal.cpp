// Wave traversal of matrix.

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

void display(vector<vector<int>> mat)
{
    for (int j = 0; j < mat[0].size(); j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < mat.size(); i++)
                cout << mat[i][j] << " ";
        }
        else
        {
            for (int i = mat.size() - 1; i >= 0; i--)
                cout << mat[i][j] << " ";
        }
    }
}
int main()
{
    cout << boolalpha;

    int row, col;
    cin >> row >> col;
    vector<vector<int>> mat(row, vector<int>(col));

    input(mat);
    display(mat);

    cout << endl;
    return 0;
}