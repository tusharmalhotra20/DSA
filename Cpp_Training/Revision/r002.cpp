#include <iostream>
#include <vector>

using namespace std;

void fibonacci(int n)
{
    int a{0}, b{1}, c{};
    for (int i = 0; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int rfibonacci(int n)
{
    if (n <= 1)
        return n;
    return rfibonacci(n - 1) + rfibonacci(n - 2);
}

int mfibonacci(int n)
{
    vector<int> store(n + 1, -1);

    if (n <= 1)
        return n;

    if (store[n] != -1)
        return store[n];

    store[n] = mfibonacci(n - 1) + mfibonacci(n - 2);

    return store[n];
}

int tfibonacci(int n)
{
    vector<int> table(n + 1, -1);

    if (n <= 1)
        return n;

    table[0] = 0;
    table[1] = 1;

    for (int i = 2; i <= n; i++)
        table[i] = table[i - 1] + table[i - 2];

    return table[n];
}
int main()
{
    int num{0};

    cin >> num;

    fibonacci(num);
    cout << rfibonacci(num) << endl;
    cout << mfibonacci(num) << endl;
    cout << tfibonacci(num) << endl;

    return 0;
}