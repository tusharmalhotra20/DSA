#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Function to determine the precedence of operators
int precedence(char oprtor)
{
    if (oprtor == '+' or oprtor == '-')
        return 1; // '+' and '-' have lower precedence
    if (oprtor == '*' or oprtor == '/')
        return 2; // '*' and '/' have higher precedence
    exit(0);      // Handle an unsupported operator
}

// Function to perform arithmetic operation based on the operator
int evaluate(int v1, int v2, char oprtor)
{
    switch (oprtor)
    {
    case '+':
        return v1 + v2; // Addition
    case '-':
        return v1 - v2; // Subtraction
    case '*':
        return v1 * v2; // Multiplication
    case '/':
        return v1 / v2; // Division
    }
}

// Function to evaluate infix expression
int evalInfix(string expr)
{
    stack<char> oprtors; // Stack to store operators
    stack<int> oprnds;   // Stack to store operands

    for (int i = 0; i < expr.size(); i++)
    {
        char ch = expr.at(i);

        if (ch == ' ')
            continue; // Skip spaces

        if (ch == '(')
            oprtors.push(ch); // Push opening parenthesis onto the operator stack

        else if (isdigit(ch))
        {
            int val = 0;

            // Parse the entire number
            while (i < expr.size() and isdigit(expr[i]))
            {
                val = (val * 10) + (expr[i] - '0');
                i++;
            }
            oprnds.push(val); // Push the parsed number onto the operand stack
            i--;
        }

        else if (ch == ')')
        {
            // Evaluate all operators until an opening parenthesis is encountered
            while (!oprtors.empty() and oprtors.top() != '(')
            {
                char op = oprtors.top();
                oprtors.pop();

                int v2 = oprnds.top();
                oprnds.pop();

                int v1 = oprnds.top();
                oprnds.pop();

                int ans = evaluate(v1, v2, op); // Perform the operation
                oprnds.push(ans);               // Push the result back onto the operand stack
            }
            if (!oprtors.empty() && oprtors.top() == '(')
                oprtors.pop(); // Remove the opening parenthesis from the stack
        }
        else if (ch == '+' or ch == '-' or ch == '*' or ch == '/')
        {
            // Evaluate higher or equal precedence operators already in the stack
            while (!oprtors.empty() and oprtors.top() != '(' and precedence(ch) <= precedence(oprtors.top()))
            {
                char op = oprtors.top();
                oprtors.pop();

                int v2 = oprnds.top();
                oprnds.pop();

                int v1 = oprnds.top();
                oprnds.pop();

                int ans = evaluate(v1, v2, op); // Perform the operation
                oprnds.push(ans);               // Push the result back onto the operand stack
            }
            oprtors.push(ch); // Push the current operator onto the operator stack
        }
    }
    // Evaluate any remaining operators in the stack
    while (!oprtors.empty())
    {
        char op = oprtors.top();
        oprtors.pop();

        int v2 = oprnds.top();
        oprnds.pop();

        int v1 = oprnds.top();
        oprnds.pop();

        int ans = evaluate(v1, v2, op); // Perform the operation
        oprnds.push(ans);               // Push the result back onto the operand stack
    }

    return oprnds.top(); // Return the final result from the operand stack
}
int main()
{
    string expr{};
    getline(cin, expr);

    int result = evalInfix(expr);

    cout << result << endl;

    return 0;
}