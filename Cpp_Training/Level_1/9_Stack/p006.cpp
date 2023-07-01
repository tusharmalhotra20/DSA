#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextGreaterElementIdx(vector<int> arr)
{
    stack<int> st;
    vector<int> nextGreaterIdx(arr.size(), 0);

    st.push(arr.size() - 1);
    nextGreaterIdx[arr.size() - 1] = arr.size();

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        while (arr[i] >= arr[st.top()] && !st.empty())
            st.pop();

        if (st.empty())
            nextGreaterIdx[i] = arr.size();
        else
            nextGreaterIdx[i] = st.top();

        st.push(i);
    }

    return nextGreaterIdx;
}

vector<int> windowsMax(vector<int> arr, int winSize)
{
    vector<int> next = nextGreaterElementIdx(arr);
    vector<int> result(arr.size(), 0);

    int j{0};
    for (int i = 0; i < arr.size(); i++)
    {
        if (j < i)
            j = i;

        while (next[j] < i + winSize)
            j = next[j];

        result.push_back(arr[j]);
    }
    return result;
}

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cin >> arr[i];
}

int main()
{
    int size{0};
    cin >> size;

    vector<int> arr(size, 0);
    input(arr);

    int winSize{0};
    cin >> winSize;

    vector<int> result = windowsMax(arr, winSize);

    for (auto ele : result)
        cout << ele << " ";

    return 0;
}