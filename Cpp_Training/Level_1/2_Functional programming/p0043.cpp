#include <iostream>
#include <cmath>

using namespace std;

int count_digits(long int n)
{
    int count{};
    while (n)
    {
        count += 1;
        n /= 10;
    }
    return count;
}
int rotated(long int n, int k, int count)
{
    while (k)
    {
        int last = n % 10;
        n += last * pow(10, count - 1);
        n /= 10;
        k -= 1;
    }

    return n;
}
void rotate(long int n, int k)
{
    if (k == 0)
    { // no need to rotate
        cout << n << endl;
        return;
    }
    int count = count_digits(n);
    if (k > 0)
    {
        int rotations{k};
        cout << rotated(n, rotations, count) << endl;
    }
    if (k < 0)
    {
        int rotations{k - count};
        cout << rotated(n, rotations, count) << endl;
    }
}

int main()
{
    long int num{};
    int rotation{};
    cin >> num >> rotation;

    rotate(num, rotation);

    return 0;
}