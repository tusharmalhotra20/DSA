#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num)
{
    for (int div = 2; div * div <= num; div++)
    {
        if (num % div == 0)
            return false;
    }
    return true;
}

void remove_primes(vector<int> &v)
{
    for (auto i = v.begin(); i != v.end(); ++i)
    {
        if (isPrime(*i))
        {
            v.erase(i);
            i--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    remove_primes(v);
    int cnt = 0;
    cout << '[';
    for (auto i : v)
    {
        if (cnt != v.size() - 1)
            cout << i << ", ";
        else
            cout << i;
        cnt++;
    }
    cout << ']';
}