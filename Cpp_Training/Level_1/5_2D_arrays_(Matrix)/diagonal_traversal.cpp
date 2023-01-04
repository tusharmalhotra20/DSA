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
    cout << boolalpha;
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    input(matrix);
    diagonalTraversal(matrix);

    return 0;
}