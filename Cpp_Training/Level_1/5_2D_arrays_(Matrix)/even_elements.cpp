#include <iostream>
#include <vector>

using namespace std;

void inputMatrix(vector<vector<int>> &mat)
{

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
            cin >> mat[i][j];
    }
}

void displayEvenElements(vector<vector<int>> mat)
{

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] % 2 == 0)
                cout << mat[i][j] << " ";

            else
                cout << "\0";
        }
        cout << endl;
    }
}
int main()
{
    cout << boolalpha;
    vector<vector<int>> mat(3, vector<int>(3));
    inputMatrix(mat);
    cout << endl;
    displayEvenElements(mat);
    cout << endl;
    return 0;
}