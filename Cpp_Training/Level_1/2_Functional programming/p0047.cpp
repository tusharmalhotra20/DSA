#include <iostream>
using namespace std;

void is_triplet(int a, int b, int c)
{
    bool is_pythagorean_triplet = false;
    int A = a * a, B = b * b, C = c * c;

    if (A == (B + C))
        is_pythagorean_triplet = true;

    if (B == (A + C))
        is_pythagorean_triplet = true;

    if (C == (A + B))
        is_pythagorean_triplet = true;

    if (is_pythagorean_triplet)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    is_triplet(a, b, c);
}