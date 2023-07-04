#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int precedence(char oprtor)
{
    if (oprtor == '+' or oprtor == '-')
        return 1;
    else if (oprtor == '*' or oprtor == '/')
        return 2;

    return 0;
}

int evaluate(int v1, int v2, char op)
{
    switch (op)
    {
    case '+':
        return v1 + v2;
    case '-':
        return v1 - v2;
    case '*':
        return v1 * v2;
    case '/':
        return v1 / v2;
    }
}

int evaluateInfixExpr(string expr)
{
    stack<int> oprnds;
    stack<char> oprtors;

    for (int i = 0; i < expr.size(); i++)
    {
        char currChar = expr[i];

        if (currChar == ' ')
            continue;

        else if (currChar == '(')
            oprtors.push(currChar);

        else if (isdigit(currChar))
        {
            int val{0};

            while (i < expr.size() and isdigit(expr[i]))
            {
                val = (val * 10) + (expr[i] - '0');
                i++;
            }
            oprnds.push(val);
            i--;
        }

        else if (currChar == ')')
        {
            while (!oprtors.empty() and oprtors.top() != '(')
            {
                char op = oprtors.top();
                oprtors.pop();

                int v2 = oprnds.top();
                oprnds.pop();

                int v1 = oprnds.top();
                oprnds.pop();

                int ans = evaluate(v1, v2, op);
                oprnds.push(ans);
            }
            oprtors.pop();
        }
        else if (currChar == '+' or currChar == '-' or currChar == '*' or currChar == '/')
        {
            while (!oprtors.empty() and oprtors.top() != '(' and precedence(currChar) <= precedence(oprtors.top()))
            {
                char op = oprtors.top();
                oprtors.pop();

                int v2 = oprnds.top();
                oprnds.pop();

                int v1 = oprnds.top();
                oprnds.pop();

                int ans = evaluate(v1, v2, op);
                oprnds.push(ans);
            }
            oprtors.push(currChar);
        }
    }
    while (!oprtors.empty())
    {
        char op = oprtors.top();
        oprtors.pop();

        int v2 = oprnds.top();
        oprnds.pop();

        int v1 = oprnds.top();
        oprnds.pop();

        int ans = evaluate(v1, v2, op);
        oprnds.push(ans);
    }
    return oprnds.top();
}

int main()
{
    string expr{"100 * (2 + 12)"};
    // getline(cin, expr);

    int result = evaluateInfixExpr(expr);

    cout << result << endl;

    return 0;
}