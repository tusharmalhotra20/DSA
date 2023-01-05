/*A program to accept three integers and print the largest of three, using if statement only.*/

#include <iostream>

using namespace std;

int main()
{
    int f{}, s{}, t{}, max{};

    cin >> f >> s >> t;
    max = f;

    if (s > max)
        max = s;
    if (t > max)
        max = t;

    cout << "largest:\t" << max << endl;

    return 0;
}

