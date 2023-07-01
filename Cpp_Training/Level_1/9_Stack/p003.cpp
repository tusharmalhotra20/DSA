/*
1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to "next greater element on the right" for all elements of array
4. Input and output is handled for you.

"Next greater element on the right" of an element x is defined as the first element to right of x having value greater than x.
Note -> If an element does not have any element on it's right side greater than it, consider -1 as it's "next greater element on right"
e.g.
for the array [2 5 9 3 1 12 6 8 7]
Next greater for 2 is 5
Next greater for 5 is 9
Next greater for 9 is 12
Next greater for 3 is 12
Next greater for 1 is 12
Next greater for 12 is -1
Next greater for 6 is 8
Next greater for 8 is -1
Next greater for 7 is -1
*/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// TC: O(n^2)
vector<int> n2ger(vector<int> vec)
{
    vector<int> res;
    bool found_next_greater{false};
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] > vec[i])
            {
                res.push_back(vec[j]);
                found_next_greater = true;
                break;
            }
        }
        if (!found_next_greater)
            res.push_back(-1);
    }
    return res;
}

// TC: O(n)
vector<int> nger(vector<int> vec)
{
    vector<int> res; // Result vector to store the next greater elements
    stack<int> st;   // Stack to track the potential next greater elements

    st.push(vec.back());
    // Initializing with the last element of the input vector
    res.push_back(-1);

    // Looping through the elements in reverse order, starting from the second last element
    for (int i = vec.size() - 2; i >= 0; i--)
    {
        // Strategy: Pop-result-push

        // Popping elements from the stack until finding a greater element or the stack becomes empty
        while (!st.empty() and vec[i] >= st.top())
            st.pop();

        // If the stack becomes empty, there is no greater element, so insert -1 in the result vector
        if (st.empty())
            res.insert(res.begin(), -1);
        else
            // Otherwise, insert the top element of the stack as the next greater element in the result vector
            res.insert(res.begin(), st.top());

        // Push the current element to the stack for future comparisons
        st.push(vec[i]);
    }
    return res;
}

int main()
{
    int size{};
    cin >> size;

    vector<int> vec(size, 0);

    // Taking input elements for the vector
    for (int i = 0; i < vec.size(); i++)
        cin >> vec[i];

    // Calling the nger function to find the next greater elements
    vector<int> result = nger(vec);

    cout << endl;

    // Displaying the result vector containing the next greater elements
    for (const auto ele : result)
        cout << ele << endl;

    return 0;
}
