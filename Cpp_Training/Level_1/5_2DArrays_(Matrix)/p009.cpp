#include <iostream>
#include <vector>

using namespace std;

void findDuplicatesSorted(vector<int> vec)
{
    int j;
    for (int i = 0; i < vec.size(); i++)
    {

        if (vec[i] != vec[i - 1] && vec[i] == vec[i + 1])
        {
            j = i + 1;

            while (vec[i] == vec[j])
                j++;
            cout << "duplicate item:\t" << vec[i] << "\tcount:\t" << j - i << endl;
            i = j - 1;
        }
    }
}
void findDuplicatesUnsorted(vector<int> vec)
{
    int count, i, j;

    for (i = 0; i < vec.size(); i++)
    {
        count = 1;
        if (vec[i] != '\0')
        {
            for (j = i + 1; j < vec.size(); j++)
            {
                if (vec[i] == vec[j])
                {
                    count++;
                    vec[j] = '\0';
                }
            }
            if (count > 1)
                cout << "duplicate element:\t" << vec[i] << "\tcount:\t" << count << endl;
        }
    }
}
    int main()
    {
        cout << boolalpha;

        vector<int> vec{1, 2, 2, 2, 4, 4, 4, 5, 8, 10, 12, 15, 15, 15};
        vector<int> vec2{2, 9, 6, 10, 9, 6, 6, 2, 7, 12, 2, 10};
         findDuplicatesUnsorted(vec2);
        cout
            << endl;
        return 0;
    }