/*
    1. You have to take a number rc (representing row & column of a square matrix) as input.
    2. You have to take rc x rc elements as input.
    3. You have to display left & right diagonals of a matrix.
    For e.g.
        i/p:   3
            1 2 3
            4 5 6
            7 8 9
        o/p:
        1
            5
                9

                3
            5
        7
*/
#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>> &mat)
{
    for (int row = 0; row < mat.size(); row++)
        for (int col = 0; col < mat[row].size(); col++)
            cin >> mat[row][col];
}
// left diagonal
void ldiagonal(const vector<vector<int>> mat)
{

    for (int row = 0; row < mat.size(); row++)
    {
        for (int col = 0; col < mat[row].size(); col++)
        {
            if (row == col)
                cout << mat[row][col] << " ";
            else
                cout << "\t";
        }
        cout << endl;
    }
}
// right diagonal
void rdiagonal(const vector<vector<int>> mat)
{

    for (int row = 0; row < mat.size(); row++)
    {
        for (int col = 0; col < mat[row].size(); col++)
        {
            if (row + col == mat.size() - 1)
                cout << mat[row][col];
            else
                cout << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int rc{};
    cin >> rc;

    vector<vector<int>> mat(rc, vector<int>(rc));

    input(mat);
    cout << endl;
    ldiagonal(mat);
    cout << endl;
    rdiagonal(mat);
    return 0;
}