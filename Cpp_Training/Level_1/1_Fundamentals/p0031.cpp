/*A program to read coordinates of two points and calculate the distance between them as per following formula*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float x1, y1, x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    float dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << "distance between x1, y1 and x2, y2 is:\t" << dist <<" units"<< endl;
    return 0;
}
