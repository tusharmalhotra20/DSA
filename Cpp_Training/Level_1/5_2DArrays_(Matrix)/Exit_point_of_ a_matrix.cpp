// Exit point of a matrix
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

void exitPointOfMatrix(vector<vector<int>> mat)
{

    int dir = 0;      // e->0, s->1, w->2, n->3
    int i = 0, j = 0; // initial direction east

    while (true)
    {
        dir = (dir + mat[i][j]) % 4;

        if (dir == 0)
        {
            j++; // move towards east ; by increasing column
        }
        else if (dir == 1)
        {
            i++; // move towards south ; by increasing row
        }
        else if (dir == 2)
        {
            j--; // move towards west ; by decreasing column
        }
        else if (dir == 3)
        {
            i--; // move towards north ; by decreasing row
        }

        if (i < 0)
        {
            i++;
            break;
        }
        else if (j < 0)
        {
            j++;
            break;
        }
        else if (i == mat.size())
        {
            i--;
            break;
        }
        else if (j == mat[0].size())
        {
            j--;
            break;
        }
    }
    cout << i << endl
         << j << endl;
}

int main()
{
    cout << boolalpha;
    int row, col;
    cin >> row >> col;

    vector<vector<int>> mat(row, vector<int>(col));

    input(mat);
    exitPointOfMatrix(mat);

    cout << endl;
    return 0;
}