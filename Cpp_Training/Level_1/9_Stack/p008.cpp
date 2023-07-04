#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op)
{
    if (op == '+' or op == '-')
        return 1;
    else if (op == '*' or op == '/')
        return 2;

    return 0;
}

void infixConversions(string expr)
{
    stack<string> prefix;
    stack<string> postfix;
    stack<char> oprtor;

    for (int i = 0; i < expr.size(); i++)
    {
        char currChar = expr[i];

        if (currChar == ' ')
            continue;

        else if (currChar == '(')
            oprtor.push(currChar);

        else if ((currChar >= '0' and currChar <= '9') or
                 (currChar >= 'a' and currChar <= 'z') or
                 (currChar >= 'A' and currChar <= 'Z'))
        {
            prefix.push(currChar + "");
            postfix.push(currChar + "");
        }

        else if (currChar == ')')
        {
            while (!oprtor.empty() and oprtor.top() != '(')
            {
                char op = oprtor.top();
                oprtor.pop();

                string prev2 = prefix.top();
                prefix.pop();

                string prev1 = prefix.top();
                prefix.pop();

                string preAns = op + prev1 + prev2;
                prefix.push(preAns);

                string v2 = postfix.top();
                postfix.pop();

                string v1 = postfix.top();
                postfix.pop();

                string postAns = v1 + v2 + op;
                postfix.push(postAns);
            }
            oprtor.pop();
        }

        else if (currChar == '+' or currChar == '-' or currChar == '*' or currChar == '/')
        {
            while (!oprtor.empty() and oprtor.top() != '(' and precedence(currChar) <= precedence(oprtor.top()))
            {
                char op = oprtor.top();
                oprtor.pop();

                string prev2 = prefix.top();
                prefix.pop();

                string prev1 = prefix.top();
                prefix.pop();

                string preAns = op + prev1 + prev2;
                prefix.push(preAns);

                string v2 = postfix.top();
                postfix.pop();

                string v1 = postfix.top();
                postfix.pop();

                string postAns = v1 + v2 + op;
                postfix.push(postAns);
            }
            oprtor.push(currChar);
        }
    }
    while (!oprtor.empty())
    {
        char op = oprtor.top();
        oprtor.pop();

        string prev2 = prefix.top();
        prefix.pop();

        string prev1 = prefix.top();
        prefix.pop();

        string preAns = op + prev1 + prev2;
        prefix.push(preAns);

        string v2 = postfix.top();
        postfix.pop();

        string v1 = postfix.top();
        postfix.pop();

        string postAns = v1 + v2 + op;
        postfix.push(postAns);
    }

    cout << prefix.top() << endl;
    cout << postfix.top() << endl;
}

int main()
{
    string expr{"a * (b - c + d) / e"};
    // getline(cin, expr);

    infixConversions(expr);

    return 0;
}