#include <iostream>
#include <vector>

using namespace std;

void inputMatrix(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cin >> mat[i][j];
        }
    }
}

void upperTriangle(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (i <= j)
                cout << mat[i][j] << " ";
            else
                cout << " \0"
                     << " ";
        }
        cout << endl;
    }
}

void lowerTriangle(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (i >= j)
                cout << mat[i][j] << " ";
            else
                cout << " \0"
                     << " ";
        }
        cout << endl;
    }
}
int main()
{
    cout << boolalpha;

    vector<vector<int>> mat(4, vector<int>(4));

    inputMatrix(mat);
    cout << endl;
    upperTriangle(mat);
    cout << endl;
    lowerTriangle(mat);

    cout << endl;
    return 0;
}