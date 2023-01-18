/*
    Exit point of a matrix.
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