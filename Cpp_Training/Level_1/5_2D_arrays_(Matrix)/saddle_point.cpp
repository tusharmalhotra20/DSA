//Saddle Price

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
int saddlePoint(vector<vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        int svj = 0; // smallestValueJ
        for (int j = 0; j < matrix.size(); j++)
        {
            if (matrix[i][j] < matrix[i][svj])
            {
                svj = j; // The value which is found to be smallest in its row ; also assumed to be greatest in its column.
            }
        }
        bool flag = true;
        for (int k = 0; k < matrix.size(); k++)
        {
            if (matrix[k][svj] > matrix[i][svj])
            {
                flag = false; // If the assumption is false ; break the loop for current row and move to next.
                break;
            }
        }
        if (flag == true)
        {
            cout << matrix[i][svj];
            return 0;
        }
    }
    cout << "Invalid input";
    return -1;
}

int main()
{
    cout << boolalpha;
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    input(matrix);
    saddlePoint(matrix);

    return 0;
}