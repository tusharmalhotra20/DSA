/*A program to input choice (1 or 2). if choice is 1, print the area of circle
otherwise print the perimeter of circle. accept the radius of circle from user {use pi = 3.141}*/

#include <iostream>

using namespace std;

int main()
{
    float r{};
    cin >> r;
    int choice{};
    cin >> choice;

    float result = (choice == 1) ? (3.141 * r * r) : (2 * 3.141 * r);

    cout << result << endl;
    return 0;
}

