#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void input(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
        cin >> vec[i];
}

void output(vector<int> vec)
{
    cout << endl;

    for (auto ele : vec)
        cout << ele << " ";
}

vector<int> nextSmallerElementIdx(vector<int> vec)
{
    stack<int> st;                     // Create an empty stack to store indices
    vector<int> result(vec.size(), 0); // Create a vector to store the indices of next smaller elements

    st.push(vec.size() - 1);             // Push the index of the last element to the stack
    result[vec.size() - 1] = vec.size(); // The index of the last element doesn't have any next smaller element

    for (int i = vec.size() - 2; i >= 0; i--)
    {
        int currElement = vec[i]; // Get the current element

        // Pop elements from the stack until a smaller element is found or the stack becomes empty
        while (!st.empty() && currElement <= vec[st.top()])
            st.pop();

        if (st.empty())
            result[i] = vec.size(); // If the stack is empty, there is no next smaller element
        else
            result[i] = st.top(); // The top element of the stack is the next smaller element

        st.push(i); // Push the index of the current element to the stack
    }

    return result; // Return the resulting vector
}

vector<int> nextGreaterElementIdx(vector<int> vec)
{
    stack<int> st;                     // Create an empty stack to store indices
    vector<int> result(vec.size(), 0); // Create a vector to store the indices of next greater elements

    st.push(vec.size() - 1);             // Push the index of last element to the stack
    result[vec.size() - 1] = vec.size(); // The index of last element doesn't have any next greater element

    for (int i = vec.size() - 2; i >= 0; i--)
    {
        int currElement = vec[i]; // Get the current element

        // Pop elements from the stack until a greater element is found or the stack becomes empty
        while (!st.empty() && currElement >= vec[st.top()])
            st.pop();

        if (st.empty())
            result[i] = vec.size(); // If the stack is empty, there is no next greater element
        else
            result[i] = st.top(); // The top element of the stack is the next greater element

        st.push(i); // Push the index of current element to the stack
    }

    return result; // Return the resulting vector
}

vector<int> prevSmallerElementIdx(vector<int> vec)
{
    stack<int> st;                     // Create an empty stack to store indices
    vector<int> result(vec.size(), 0); // Create a vector to store the indices of previous smaller elements

    st.push(0);     // Push the index of first element to the stack
    result[0] = -1; // The index of first element doesn't have any previous smaller element

    for (int i = 1; i < vec.size(); i++)
    {
        int currElement = vec[i]; // Get the current element

        // Pop elements from the stack until a smaller element is found or the stack becomes empty
        while (!st.empty() and currElement <= vec[st.top()])
            st.pop();

        if (st.empty())
            result[i] = -1; // If the stack is empty, there is no previous smaller element
        else
            result[i] = st.top(); // The top element of the stack is the previous smaller element

        st.push(i); // Push the index of current element to the stack
    }

    return result; // Return the resulting vector
}
vector<int> prevGreaterElementIdx(vector<int> vec)
{
    stack<int> st;                     // Create an empty stack to store indices
    vector<int> result(vec.size(), 0); // Create a vector to store the indices of previous greater elements

    st.push(0);     // Push the index of first element to the stack
    result[0] = -1; // The index of first element doesn't have any previous greater element

    for (int i = 1; i < vec.size(); i++)
    {
        int currElement = vec[i]; // Get the current element

        // Pop elements from the stack until a greater element is found or the stack becomes empty
        while (!st.empty() && currElement >= vec[st.top()])
            st.pop();

        if (st.empty())
            result[i] = -1; // If the stack is empty, there is no previous greater element
        else
            result[i] = st.top(); // The top element of the stack is the previous greater element

        st.push(i); // Push the index of current element to the stack
    }

    return result; // Return the resulting vector
}

int main()
{
    int size{0};
    cin >> size;

    vector<int> vec(size, 0);
    input(vec);

    vector<int> nSResult = nextSmallerElementIdx(vec);
    vector<int> nGResult = nextGreaterElementIdx(vec);
    vector<int> pSResult = prevSmallerElementIdx(vec);
    vector<int> pGResult = prevGreaterElementIdx(vec);

    output(nSResult);
    output(nGResult);
    output(pSResult);
    output(pGResult);

    return 0;
}