/*
1. You are given a string exp representing an expression.
2. You are required to check if the expression is balanced i.e. closing brackets and opening brackets match up well.

    e.g.
    [(a + b) + {(c + d) * (e / f)}] -> true
    [(a + b) + {(c + d) * (e / f)]} -> false
    [(a + b) + {(c + d) * (e / f)} -> false
    ([(a + b) + {(c + d) * (e / f)}] -> false
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool are_brackets_balanced(string expr)
{
    // Declaring an empty stack to store opening brackets
    stack<char> st;
    bool is_balanced{true};

    // Loop through each character in the expression
    for (const char ch : expr)
    {
        // If the character is an opening bracket, push it onto the stack
        if (ch == '(' or ch == '[' or ch == '{')
            st.push(ch);
        else
        {
            // If the character is a closing bracket
            if (st.empty())
            {
                // If the stack is empty and a closing bracket is encountered,
                // it means there is no corresponding opening bracket,
                // so the brackets are not balanced
                is_balanced = false;
                break;
            }
            // Compare the closing bracket with the top of the stack
            char top = st.top();
            if (ch == ')' and top == '(')
                st.pop();
            else if (ch == ']' and top == '[')
                st.pop();
            else if (ch == '}' and top == '{')
                st.pop();
        }
    }
    // If there are still elements in the stack, it means there are opening brackets
    // without corresponding closing brackets, so the brackets are not balanced
    if (!st.empty())
        is_balanced = false;

    return is_balanced;
}
int main()
{
    cout << boolalpha;

    // defining & initializing string expression
    string input_str{};

    // taking input from user
    getline(cin, input_str);

    // function call to check wether brackets are balanced or not
    bool result = are_brackets_balanced(input_str);

    // displaying output
    cout << result << endl;

    return 0;
}