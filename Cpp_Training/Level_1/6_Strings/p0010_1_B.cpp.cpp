#include<iostream>

using namespace std;

int main()
{
    char str[] = "aabchhisakhghlmca";
    int i{0}, j{0},count{1};

    for (i; str[i] != '\0'; i++)
    {
        count = 1;
        if (str[i] != -1)
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = -1;
                }
                else
                    continue;
            }
            if (count > 1)
                cout << "duplicate character found:\t" << str[i] << count << endl;
        }
    }

    cout<<endl;
    return 0;
}