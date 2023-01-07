#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int product(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}

int main()
{
    int num1{}, num2{};

    cin >> num1 >> num2;

    cout << add(num1, num2) << endl;
    cout << subtract(num1, num2) << endl;
    cout << product(num1, num2) << endl;
    cout << division(num1, num2) << endl;

    return 0;
}