/*
1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the maximum of input. 
4. For the purpose complete the body of maxOfArray function. Don't change the signature.

*/
#include <iostream>
using namespace std;

int max(int arr[], int idx, int n)
{
    // write your code here
    if (idx == n - 1)
    {
        return arr[idx];
    }
    int misa = max(arr, idx + 1, n); // misa- max-in-smaller-array
    if (misa > arr[idx])
        return misa;
    else
        return arr[idx];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
