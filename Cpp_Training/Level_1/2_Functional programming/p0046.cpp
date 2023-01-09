#include <iostream>
using namespace std;

void benjamin_bulbs(int num)
{
    for (int i = 1; i * i <= num; i++)
    {
        cout << i * i << endl;
    }
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    benjamin_bulbs(n);
    return 0;
}