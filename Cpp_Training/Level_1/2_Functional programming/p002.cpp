#include <iostream>

using namespace std;

float calc(float a, char op, float b)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        cout << "invalid operation" << endl;
        return -1;
    }
}
void input(float &num1, char &op, float &num2)
{
    cin >> num1 >> op >> num2;
}
int main()
{
    float num1{}, num2{};
    char op{};

    input(num1, op, num2);
    cout << calc(num1, op, num2) << endl;

    return 0;
}