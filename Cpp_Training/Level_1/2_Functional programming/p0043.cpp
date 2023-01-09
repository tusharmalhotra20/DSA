#include <iostream>

using namespace std;

int count_digits(int n)
{
    int count{};
    while (n)
    {
        count += 1;
        n /= 10;
    }
    return count;
}

void rotate(int num, int k)
{
    int digits = count_digits(num);
    int mul = 1, div = 1;
    int res = 0;
    k = ((k % digits) + digits) % digits;

    for (int i = 1; i <= digits; i++)
    {
        if (i <= k)
            div *= 10;
        else
            mul *= 10;
    }
    res = ((num % div) * mul) + num / div;
    cout << res << endl;
}

int main()
{
    int num{}, rotation{};
    cin >> num >> rotation;

    rotate(num, rotation);

    return 0;
}