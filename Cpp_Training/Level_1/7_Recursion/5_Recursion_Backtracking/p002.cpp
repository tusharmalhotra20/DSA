#include <bits/stdc++.h>
using namespace std;

// set is the subset
// sos is sum of subset
// tar is target
void printTargetSumSubsets(vector<int> arr, int idx, string set, int sos, int tar)
{
    // write your code here
    if (idx == arr.size())
    {
        if (sos == tar)
        {
            cout << set << "." << endl;
        }
        return;
    }
    if (sos + arr[idx] <= tar)
        printTargetSumSubsets(arr, idx + 1, set + to_string(arr[idx]) + ", ", sos + arr[idx], tar);
    
    printTargetSumSubsets(arr, idx + 1, set, sos, tar);
}

int main()
{
    int num{}, tar{};

    cin >> num;

    vector<int> vec(num);

    for (int idx = 0; idx < vec.size(); idx++)
        cin >> vec[idx];

    cin >> tar;

    printTargetSumSubsets(vec, 0, "", 0, tar);
    return 0;
}