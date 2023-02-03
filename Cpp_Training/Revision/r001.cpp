#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void printPrime(int l, int h)
{
    for (int i = l; i <= h; i++)
    {
        if (isPrime(i))
            cout << i << endl;
        else
            continue;
    }
}
int main()
{
    // int num{0};
    // cin >> num;
    // cout << boolalpha << endl;
    // cout << isPrime(num) << endl;
    
    int low{0}, high{0};
    cin >> low >> high;

    printPrime(low, high);
    return 0;
}