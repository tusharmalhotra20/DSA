// Spiral traversal of matrix.
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
    int minr = 0, minc = 0;
    int maxr = mat.size()-1, maxc = mat[0].size()-1;
    int te = mat.size() * mat[0].size();
    int count = 0;

    while (count < te)
    {
        //left wall
        for (int i = minr, j = minc; i <= maxr ; i++)
        {
            cout << mat[i][j] << " ";
            count++;
        }
        minc++;

        //bottom wall
        for (int i = maxr, j = minc; j <= maxc ; j++)
        {
            cout << mat[i][j] << " ";
            count++;
        }
        maxr--;
        
        //right wall
        for (int i = maxr, j = maxc; i >= minr ; i--)
        {
            cout << mat[i][j] << " ";
            count++;
        }
        maxc--;

        //top wall
        for (int i = minr, j = maxc; j >= minc ; j--)
        {
            cout << mat[i][j] << " ";
            count++;
        }
        minr++;
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