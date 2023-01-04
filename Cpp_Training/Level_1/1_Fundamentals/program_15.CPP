/*Enter principle, rate and time to calculate simple interest*/

#include <iostream>

using namespace std;

int main()
{
    float pr, r, t, i;

    cout << "\n\nEnter principle:\t";
    cin >> pr;
    cout << "\nEnter rate:\t";
    cin >> r;
    cout << "\nEnter time:\t";
    cin >> t;

    i = (pr * r * t) / 100;

    cout << "\nSimple Interest:\t" << i;

    return 0;
}
