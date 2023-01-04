// Shell Rotate
#include <iostream>
#include <vector>

using namespace std;

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

void fillShellFromOned(vector<vector<int>> &mat, int s, vector<int> &oned)
{
    int minr = s - 1, minc = s - 1;
    int maxr = mat.size() - s, maxc = mat[0].size() - s;
   
    int idx = 0;
    // lw
    for (int i = minr, j = minc; i <= maxr; i++)
    {
        mat[i][j] = oned[idx] ;
        idx++;
    }
    // bw
    for (int i = maxr, j = minc + 1; j <= maxc; j++)
    {
        mat[i][j] = oned[idx];
        idx++;
    }
    // rw
    for (int i = maxr - 1, j = maxc; i >= minr; i--)
    {
        mat[i][j] = oned[idx];
        idx++;
    }
    // tw
    for (int i = minr, j = maxc - 1; j >= minc + 1; j--)
    {
        mat[i][j] = oned[idx];
        idx++;
    }
}

void rotate(vector<int> &vec, int r)
{
    if (r > 0)
    {
        r %= vec.size();
        while (r > 0)
        {
            int temp = vec[vec.size() - 1];

            for (int i = vec.size() - 1; i > 0; i--)
                vec[i] = vec[i - 1];
            vec[0] = temp;
            r--;
        }
    }
    if (r < 0)
    {
        r %= vec.size();
        while (r > 0)
        {
            int temp = vec[0];

            for (int i = 0; i < vec.size(); i++)
                vec[i] = vec[i + 1];
            vec[vec.size() - 1] = temp;
            r--;
        }
    }
}

vector<int> fillOnedFromShell(vector<vector<int>> &mat, int s)
{
    int minr = s - 1, minc = s - 1;
    int maxr = mat.size() - s, maxc = mat[0].size() - s;
    int sz = 2 * (maxr - minr + maxc - minc);
    vector<int> oned(sz);

    int idx = 0;
    // lw
    for (int i = minr, j = minc; i <= maxr; i++)
    {
        oned[idx] = mat[i][j];
        idx++;
    }
    // bw
    for (int i = maxr, j = minc + 1; j <= maxc; j++)
    {
        oned[idx] = mat[i][j];
        idx++;
    }
    // rw
    for (int i = maxr - 1, j = maxc; i >= minr; i--)
    {
        oned[idx] = mat[i][j];
        idx++;
    }
    // tw
    for (int i = minr, j = maxc - 1; j >= minc + 1; j--)
    {
        oned[idx] = mat[i][j];
        idx++;
    }

    return oned;
}

void rotateShell(vector<vector<int>> &mat, int s, int r)
{
    vector<int> oned = fillOnedFromShell(mat, s);
    rotate(oned, r);
    fillShellFromOned(mat, s, oned);
}

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
int main()
{
    cout << boolalpha;

    int row, col;
    cin >> row >> col;

    vector<vector<int>> mat(row, vector<int>(col));
    input(mat);

    int s, r;
    cin >> s >> r;

    rotateShell(mat, s, r);
    display(mat);
    return 0;
}