/*A program to display ASCII code of character and character corresponding to ASCII code*/

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    char ch, hc;

    cout << "\nEnter any character:\t";
    cin >> ch;
    cout << "Enter ASCII code for any character:\t";
    cin >> i;

    j = ch;
    hc = i;

    cout << "\n\nASCII code of input character:\t" << j;
    cout << "\nCharacter corresponding to input ASCII code:\t" << hc;

    return 0;
}