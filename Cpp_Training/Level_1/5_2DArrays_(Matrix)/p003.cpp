/*
    1. You have to take input for row1, col1, row2 & col2.
    2. You have to take row1 x col1 elements & row2 x col2 elemenst as input for matrix A & B respectively.
    3. You have to return the product of matrix A & matrix B and then display it.
    For e.g.
        i/p: 2 4
             4 2

             2 3 4 6
             1 0 2 9

             7 1
             6 2
             2 1
             8 3

        o/p: 88 30
             83 30
*/
#include <iostream>
#include <vector>

using namespace std;

void input(vector<vector<int>> &mat)
{
    for (int row = 0; row < mat.size(); row++)
        for (int col = 0; col < mat[row].size(); col++)
            cin >> mat[row][col];
}

void display(const vector<vector<int>> mat)
{
    for (int row = 0; row < mat.size(); row++)
    {
        for (int col = 0; col < mat[row].size(); col++)
            cout << mat[row][col] << " ";
        cout << endl;
    }
}

bool validate(int c1, int r2)
{
    bool flag{};
    flag = c1 == r2 ? true : false;
    return flag;
}

vector<vector<int>> multiply(const vector<vector<int>> mat1, const vector<vector<int>> mat2)
{
    vector<vector<int>> mat3(mat1.size(), vector<int>(mat2[0].size()));

    for (int row = 0; row < mat3.size(); row++)
    {
        for (int col = 0; col < mat3[row].size(); col++)
        {
            mat3[row][col] = 0;
            for (int ele = 0; ele < mat1[row].size(); ele++)
                mat3[row][col] += mat1[row][ele] * mat2[ele][col];
        }
    }
    return mat3;
}

int main()
{
    int r1{}, c1{}, r2{}, c2{};
    cin >> r1 >> c1;
    cout << endl;
    cin >> r2 >> c2;
    cout << endl;

    if (!validate(c1, r2))
    {
        cout << "Invalid input" << endl;
        return -1;
    }

    vector<vector<int>> A(r1, vector<int>(c1));
    vector<vector<int>> B(r2, vector<int>(c2));

    input(A);
    cout << endl;
    input(B);
    cout << endl;

    vector<vector<int>> C = multiply(A, B);
    cout << endl;

    display(C);
    cout << endl;
    return 0;
}