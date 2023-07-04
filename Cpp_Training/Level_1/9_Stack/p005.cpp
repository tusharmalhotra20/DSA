#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextSmallerElementIdx(vector<int> heights)
{
    stack<int> st;
    vector<int> nextSmallerIdx(heights.size(), 0);

    st.push(heights.size());

    for (int i = heights.size() - 1; i >= 0; i--)
    {

        while (st.top() != heights.size() and heights[st.top()] >= heights[i])
            st.pop();

        nextSmallerIdx[i] = st.top();

        st.push(i);
    }
    return nextSmallerIdx;
}

vector<int> prevSmallerElementIdx(vector<int> heights)
{
    stack<int> st;
    vector<int> prevSmallerIdx(heights.size(), 0);

    st.push(-1);

    for (int i = 0; i < heights.size(); i++)
    {
        while (heights[st.top()] >= heights[i] and st.top() != -1)
            st.pop();

        prevSmallerIdx[i] = st.top();

        st.push(i);
    }
    return prevSmallerIdx;
}

int largestAreaHistogram(vector<int> heights)
{
    vector<int> next = nextSmallerElementIdx(heights);

    cout << endl;

    for (auto ele : next)
        cout << ele<<" ";

    vector<int> prev = prevSmallerElementIdx(heights);

    int maxArea{INT32_MIN};
    for (int i = 0; i < heights.size(); i++)
    {
        int length = heights[i];
        int breadth = next[i] - prev[i] - 1;
        int area = length * breadth;

        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{
    int size{};
    cin >> size;

    vector<int> heights(size, 0);

    for (int i = 0; i<heights.size()> 0; i++)
        cin >> heights[i];

    int result = largestAreaHistogram(heights);

    // cout << result << endl;

    return 0;
}