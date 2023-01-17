/* sum of elements row-wise */

#include <iostream>
#include <vector>

using namespace std;

int row_sum(const vector<vector<int>> A)
{
    int sum{};

    for (int row = 0; row < A.size(); row++)
    {

        for (int col = 0; col < A[row].size(); col++)
            sum += A[row][col];
        cout << row << ":\t" << sum << endl;
    }

    return sum;
}

int col_sum(const vector<vector<int>> A)
{
    int sum{};

    for (int col = 0; col < A[0].size(); col++)
    {
        for (int row = 0; row < A.size(); row++)
            sum += A[row][col];
        cout << col << ":\t" << sum << endl;
    }

    return sum;
}
void input(vector<vector<int>> &A)
{
    for (int row = 0; row < A.size(); row++)
        for (int col = 0; col < A[row].size(); col++)
            cin >> A[row][col];
}
int main()
{
    int r{}, c{};
    cin >> r >> c;
    vector<vector<int>> A(r, vector<int>(c));
    input(A);
    cout << row_sum(A) << endl;
    cout << col_sum(A) << endl;

    return 0;
}