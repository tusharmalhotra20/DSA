/*
    Different ways of traversing a matrix:
        -wave
        -spiral
        -diagonal
*/
#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>> &A)
{
    for (int row = 0; row < A.size(); row++)
        for (int col = 0; col < A[row].size(); col++)
            cin >> A[row][col];
}

void wave_traverse(const vector<vector<int>> A)
{
    for (int col = 0; col < A[0].size(); col++)
    {
        if (col % 2 == 0)
            for (int row = 0; row < A.size(); row++)
                cout << A[row][col] << " ";
        else
            for (int row = A.size() - 1; row >= 0; row--)
                cout << A[row][col] << " ";
    }
}

void spiral_traverse(const vector<vector<int>> A)
{
    /*
        tr- top-row
        fc- first-column
        br- bottom-row
        lc- last-column
        te- total-elements
    */
    int tr{0}, fc{0}, br = A.size() - 1, lc = A[0].size() - 1;
    int te = A.size() * A[0].size(), count{0};

    while (count < te)
    {
        // left-wall
        for (int i = tr, j = fc; i <= br && count < te; i++)
        {
            cout << A[i][j] << " ";
            count++;
        }
        fc += 1;

        // bottom-wall
        for (int i = br, j = fc; j <= lc && count < te; j++)
        {
            cout << A[i][j] << " ";
            count++;
        }
        br -= 1;

        // right-wall
        for (int i = br, j = lc; i >= tr && count < te; i--)
        {
            cout << A[i][j] << " ";
            count++;
        }
        lc -= 1;

        // top-wall
        for (int i = tr, j = lc; j >= fc && count < te; j--)
        {
            cout << A[i][j] << " ";
            count++;
        }
        tr += 1;
    }
}

void diagonal_traverse(const vector<vector<int>> A)
{
    int row{0}, col{0};

    for (int gap = 0; gap < A.size(); gap++)
        for (int row = 0, col = gap; col < A.size(); row++, col++)
            cout << A[row][col] << " ";
}
int main()
{
    int r{}, c{};
    cin >> r >> c;
    vector<vector<int>> A(r, vector<int>(c));

    input(A);
    cout << endl;

    // wave_traverse(A);
    // cout << endl;

    // spiral_traverse(A);
    // cout << endl;

    // diagonal_traverse(A);
    // cout << endl;

    return 0;
}