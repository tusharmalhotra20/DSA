/*A program to create the equivalent of a four-functioned calculator. The program requires
the user to enter two numbers and an operator. It then carries out the specified arithmetical
operation: (+,-,*,/) of the two numbers and display the result*/

#include <iostream>

using namespace std;

int main()
{
  float num1{}, num2{};
  char opr{};

  // input
  cin >> num1 >> opr >> num2;

  switch (opr)
  {
  case '+':
    cout << "= " << num1 + num2 << endl;
    break;
  case '-':
    cout << "= " << num1 - num2 << endl;
    break;
  case '*':
    cout << "= " << num1 * num2 << endl;
    break;
  case '/':
    if (num1 == 0 && num2 == 0)
    {
      cout << "Division by zero error" << endl;
      break;
    }
    cout << "= " << num1 / num2 << endl;
    break;
  default:
    cout << "wrong input" << endl;
    break;
  }
  return 0;
}