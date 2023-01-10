/*A program to find area & perimeter of shapes-
    1. Square
    2. Rectangle
    3. Triangle
    3. Circle
.*/

#include <iostream>
#include <cmath>

using namespace std;

float square(float s, char q)
{
    if (q == 'p')
        return 4 * s;
    else if (q == 'a')
        return s * s;
    else
        return -1;
}
float rect(float l, float w, char q)
{
    if (q == 'p')
        return 2 * (l + w);
    else if (q == 'a')
        return l * w;
    else
        return -1;
}
float tri(float s, char q)
{
    if (q == 'p')
        return 3 * s;
    else if (q == 'a')
        return (sqrt(3) / 4) * (s * s);
    else
        return -1;
}
float circle(float r, char q)
{
    if (q == 'p')
        return 2 * 3.141 * r;
    else if (q == 'a')
        return 3.141 * r * r;
    else
        return -1;
}

int main()
{
    /* area & perimeter of square */
    float side{};
    cin >> side;
    cout << square(side, 'p') << " units" << endl;
    cout << square(side, 'a') << " sq. units" << endl;

    /* area & perimeter of rectangle */
    float len{}, width{};
    cin >> len >> width;
    cout << rect(len, width, 'p') << " units" << endl;
    cout << rect(len, width, 'a') << " sq. units" << endl;

    /* area & perimeter of Triangle (assumed equilateral triangle) */
    float s{};
    cin >> s;
    cout << tri(s, 'p') << " units" << endl;
    cout << tri(s, 'a') << " sq. units" << endl;

    /* area & perimeter of Circle */
    float rd{};
    cin >> rd;
    cout << circle(rd, 'p') << " units" << endl;
    cout << circle(rd, 'a') << " sq. units" << endl;

    return 0;
}
