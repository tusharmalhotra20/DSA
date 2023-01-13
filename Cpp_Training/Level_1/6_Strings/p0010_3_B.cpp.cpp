//bit method
#include <iostream>

using namespace std;

int main()
{
    char str[] = "finding"; //considering lower case character only
    int h{0}, x{1};

    for (int i{0}; str[i] != '\0'; i++)
    {
        x = 1;

        x = x << str[i] - 97; //left shifting- moving x to index corresponding to current character

        if ((h & x) > 0) //masking- checking wether its already ON or NOT
            cout << "duplicate character found in string:\t" << str[i] << endl;
        else
            h = h | x; //merging- setting bit ON
    }
    cout << endl;
    return 0;
}