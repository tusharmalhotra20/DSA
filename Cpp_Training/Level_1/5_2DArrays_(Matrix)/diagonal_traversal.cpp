#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>> &matrix)
{
    for (int row = 0; row < matrix.size(); row++)
    {
        for (int col = 0; col < matrix[row].size(); col++)
        {
            cin >> matrix[row][col];
        }
    }
}

void diagonalTraversal(vector<vector<int>> matrix)
{

    for (int gap = 0; gap < matrix.size(); gap++)
    {
        for (int row = 0, col = gap; col < matrix.size(); row++, col++)
        {
            cout << matrix[row][col] << endl;
        }
    }
}

int main()
{
    int num{};
    cin >> num;
    vector<vector<int>> matrix(num, vector<int>(num));
    input(matrix);
    diagonalTraversal(matrix);

    return 0;
}