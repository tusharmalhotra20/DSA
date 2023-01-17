/*
    1. You have to take a number rc (representing row & column of a square matrix) as input.
    2. You have to take rc x rc elements as input.
    3. You have to display upper & lower triangles of a matrix.
    For e.g.
        i/p:   3
            1 2 3
            4 5 6
            7 8 9
        o/p:
            1 2 3 
              5 6 
                9 
        
            1     
            4 5   
            7 8 9 
*/
#include <iostream>
#include <vector>

using namespace std;

void inputMatrix(vector<vector<int>> &mat)
{
    for (int row = 0; row < mat.size(); row++)
        for (int col = 0; col < mat[row].size(); col++)
            cin >> mat[row][col];
}

void upperTriangle(const vector<vector<int>> mat)
{
    for (int row = 0; row < mat.size(); row++)
    {
        for (int col = 0; col < mat[row].size(); col++)
        {
            if (row <= col)
                cout << mat[row][col] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

void lowerTriangle(const vector<vector<int>> mat)
{
    for (int row = 0; row < mat.size(); row++)
    {
        for (int col = 0; col < mat[row].size(); col++)
        {
            if (row >= col)
                cout << mat[row][col] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
int main()
{
    int rc{};
    cin >> rc;
    vector<vector<int>> mat(rc, vector<int>(rc));

    inputMatrix(mat);
    cout << endl;
    upperTriangle(mat);
    cout << endl;
    lowerTriangle(mat);

    cout << endl;
    return 0;
}