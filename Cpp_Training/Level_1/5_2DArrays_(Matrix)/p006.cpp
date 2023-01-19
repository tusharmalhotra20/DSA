/*
    1. You are given a number r, representing the number of rows.
    2. You are given a number c, representing the number of columns.
    3. You are given r*c numbers (1's and 0's), representing elements of 2d array a.
    4. Consider this array a maze and a player enters from top-left corner in east direction.
    5. The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
    6. You are required to print the indices in (row, col) format of the point from where you exit the matrix.
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

void exitPointOfMatrix(const vector<vector<int>> A)
{
    int dir{0};     // 0-> e| 1-> s| 2-> w| 3-> n
    int i{0}, j{0}; // initial direction is east

    while (true)
    {
        dir = (dir + A[i][j]) % 4;

        if (dir == 0)
            j++; // move towards east ; by increasing column
        else if (dir == 1)
            i++; // move towards south ; by increasing row
        else if (dir == 2)
            j--; // move towards west ; by decreasing column
        else if (dir == 3)
            i--; // move towards north ; by decreasing row

        if (i < 0)
        {
            i++;
            break;
        }
        else if (j < 0)
        {
            j++;
            break;
        }
        else if (i == A.size())
        {
            i--;
            break;
        }
        else if (j == A[0].size())
        {
            j--;
            break;
        }
    }
    cout << i << endl
         << j << endl;
}

int main()
{
    int r{}, c{};
    cin >> r >> c;
    vector<vector<int>> A(r, vector<int>(c));

    input(A);
    cout << endl;
    exitPointOfMatrix(A);
    cout << endl;
    return 0;
}