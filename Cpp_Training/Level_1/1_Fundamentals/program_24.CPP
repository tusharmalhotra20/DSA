/*A program to input three integer and print the largest of three using conditional operator*/

#include <iostream>

using namespace std;

int main()
{
    int first{}, second{}, third{};

    cin >> first >> second >> third;

    int result = first > second ? (first > third ? first : third) : (second > third ? second : third);

    cout << "Largest of three:\t" << result;

    return 0;
}
