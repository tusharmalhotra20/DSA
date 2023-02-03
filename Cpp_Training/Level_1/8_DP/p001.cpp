/*
    **DP solves optimal problems
    optimal problems are those that requires either min. or max. solution.
    DP mostly uses recursive formulas.
*/

#include <iostream>
#include <vector>

using namespace std;

// using memoization- top-down approach
int mfibonacci(int n, vector<int> storage)
{
    if (n <= 1)
        return n;
    if (storage[n] != -1)
        return storage[n];

    storage[n] = mfibonacci(n - 1, storage) + mfibonacci(n - 2, storage);

    return storage[n];
}

// using tabulation- bottom-up approach
int tfibonacci(int n, vector<int> table)
{
    if (n <= 1)
        return n;

    table[0] = 0;
    table[1] = 1;

    for (int idx = 2; idx <= n; idx++)
        table[idx] = table[idx - 1] + table[idx - 2];

    return table[n];
}
int main()
{

    int num{0};
    cin >> num;
    
    vector<int> storage(num + 1, -1);
    
    cout << mfibonacci(num, storage) << endl;
    cout << tfibonacci(num, storage) << endl;

    return 0;
}