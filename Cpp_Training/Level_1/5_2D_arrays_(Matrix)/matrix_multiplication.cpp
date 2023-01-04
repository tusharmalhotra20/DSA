// Matrix multiplication

#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cin >> mat[i][j];
        }
    }
}

void display(vector<vector<int>> mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void multiply(vector<vector<int>> mat1, vector<vector<int>> mat2, vector<vector<int>> &mat3)
{

    for (int i = 0; i < mat3.size(); i++)
    {
        for (int j = 0; j < mat3[i].size(); j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < mat1[i].size(); k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    cout << boolalpha;

    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    cout << endl;
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Invalid input" << endl;
        return -1;
    }

    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));
    vector<vector<int>> C(r1, vector<int>(c2));

    input(A);
    cout << endl;
    input(B);
    cout << endl;

    multiply(A, B, C);
    cout << endl;

    display(A);
    cout << endl;

    display(B);
    cout << endl;

    display(C);
    cout << endl;
    return 0;
}