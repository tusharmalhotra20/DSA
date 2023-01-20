/*
    Rotate by 90deg.
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

void rotate90(const vector<vector<int>> A)
{
    for (int row = 0; row < A.size(); row++)
    {
        for (int col = A[row].size() - 1; col >= 0; col--)
            cout << A[col][row] << " ";
        cout << endl;
    }
}
int main()
{
    int r{}, c{};
    cin >> r >> c;
    cout << endl;

    vector<vector<int>> A(r, vector<int>(c));

    input(A);
    cout << endl;
    rotate90(A);

    return 0;
}
