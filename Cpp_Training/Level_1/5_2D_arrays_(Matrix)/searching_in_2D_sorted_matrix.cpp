// Search in a sorted Matrix

#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int searchInMatrix(vector<vector<int>> matrix, int target)
{

    int i = 0, j = matrix.size() - 1;

    while (i < matrix.size() && j >= 0)
    {
        if (target == matrix[i][j])
        {
            cout << i << endl
                 << j;
            return 0;
        }
        else if (target < matrix[i][j])
        {
            j--;
        }
        else if (target > matrix[i][j])
        {
            i++;
        }
    }
    cout << "Not Found";
    return -1;
}

int main()
{
    cout << boolalpha;
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    input(matrix);
    int target;
    cin >> target;
    searchInMatrix(matrix, target);
    cout << endl;
    return 0;
}