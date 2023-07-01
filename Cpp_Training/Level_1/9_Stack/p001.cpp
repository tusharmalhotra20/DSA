/*
    Duplicate Brackets
        1. You are given a string exp representing an expression.
        2. Assume that the expression is balanced  i.e. the opening and closing brackets match with each other.
        3. But, some of the pair of brackets maybe extra/needless.
        4. You are required to print true if you detect extra brackets and false otherwise.

    e.g.
    ((a + b) + (c + d)) -> false
    (a + b) + ((c + d)) -> true
*/
#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

bool check_duplicate_paranthesis(string expr)
{
    stack<char> st;

    // Iterate through each character in the expression
    for (const char ch : expr)
    {
        // If the character is an opening parenthesis or an operator, push it onto the stack
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            st.push(ch);
        else
        {
            // If the character is a closing parenthesis
            if (ch == ')')
            {
                bool is_duplicate{true};
                // Keep popping elements from the stack until an opening parenthesis is encountered
                while (st.top() != '(')
                {
                    char top = st.top();
                    // Check if any operators are found between the parentheses
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                        is_duplicate = false;
                    st.pop(); // Pop the operator from the stack
                }
                if (is_duplicate) // If duplicate parentheses are found, return true
                    return true;
                st.pop(); // Pop the opening parenthesis from the stack
            }
        }
    }
    return false; // If no duplicate parentheses are found, return false
}
int main()
{
    cout << boolalpha;

    // Declare and initialize the input string
    string input_str{};

    // Take input from the user
    getline(cin, input_str);

    // Call the function to check for duplicate parentheses
    bool result = check_duplicate_paranthesis(input_str);

    // Print the result
    cout << result << endl;

    return 0;
}