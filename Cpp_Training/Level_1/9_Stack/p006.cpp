#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nextGreaterElementIdx(vector<int> vec)
{
    stack<int> st;
    vector<int> ans(vec.size(), 0);

    ans[vec.size() - 1] = ans.size();
    st.push(vec.size() - 1);

    for (int i = vec.size() - 2; i >= 0; i--)
    {
        while (!st.empty() and vec[i] >= vec[st.top()])
            st.pop();

        if (st.empty())
            ans[i] = vec.size();
        else
            ans[i] = st.top();

        st.push(i);
    }

    return ans;
}
vector<int> windowMax(vector<int> vec, int winSize)
{

    vector<int> next = nextGreaterElementIdx(vec);
    vector<int> result(vec.size() - winSize + 1);

    int j{0};
    for (int i = 0; i < vec.size(); i++)
    {
        if (j < i)
            j = i;

        while (next[j] < (i + winSize))
            j = next[j];

        result[i] = vec[j];
    }

    return result;
}

int main()
{
    int size{0};
    cin >> size;

    vector<int> vec(size, 0);
    for (int i = 0; i < vec.size(); i++)
        cin >> vec[i];

    int winSize{0};
    cin >> winSize;

        vector<int> result = windowMax(vec, winSize);

    for (auto ele : result)
        cout << ele << " ";

    return 0;
}