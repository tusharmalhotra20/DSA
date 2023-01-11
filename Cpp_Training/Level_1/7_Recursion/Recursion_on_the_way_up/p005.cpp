#include <iostream>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{
    if (sr == dr && sc == dc)
    {
        cout << psf << endl;
        return;
    }
    if (sr > dr || sc > dc)
    {
        return;
    }

    // horizontal moves
    for (int ms = 1; ms <= dc - sc; ms++)
    {
        printMazePaths(sr, sc + ms, dr, dc, psf + "h" + to_string(ms));
    }
    // vertical moves
    for (int ms = 1; ms <= dr - sr; ms++)
    {
        printMazePaths(sr + ms, sc, dr, dc, psf + "v" + to_string(ms));
    }
    // diagonal moves
    for (int ms = 1; ms <= dc - sc && ms <= dr - sr; ms++)
    {
        printMazePaths(sr + ms, sc + ms, dr, dc, psf + "d" + to_string(ms));
    }
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}