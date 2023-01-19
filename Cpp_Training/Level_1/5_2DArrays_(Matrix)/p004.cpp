/*
    1. You have to take input for row & column.
    2. You have to take row x column elements as input for matrix .
    3. You have to write three functions that return the sum of elements:
        a. row-wise
        b. column-wise
    4. Also you have to print the sum of of each row (and column) with respective row number (column number).
    For e.g.
        i/p: 2 4

             2 3 4 6
             1 0 2 9

        o/p: 0:      15
             1:      27
             27
             0:      3
             1:      6
             2:      12
             3:      27
             27
*/

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