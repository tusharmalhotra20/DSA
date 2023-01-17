#include <iostream>

using namespace std;

class lower_tri //row-major implementation
{
    int *a;
    int size;

public:
    lower_tri(int sz)
    {
        size = sz;                          //dimension of matrix
        a = new int[size * (size + 1) / 2]; //total non-zero elements
    }
    int get(int, int);
    void set(int, int, int);
    void display();
};

int lower_tri::get(int i, int j)
{
    if (i >= j)
        return a[(i * (i - 1) / 2) + (j - 1)];
    else
        return 0;
}
void lower_tri::set(int i, int j, int val)
{
    if (i >= j)
        a[(i * (i - 1) / 2) + (j - 1)] = val;
    else
        a[(i * (i - 1) / 2) + (j - 1)] = 0;
}
void lower_tri::display()
{
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (i >= j)
                cout << a[(i * (i - 1) / 2) + (j - 1)] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    lower_tri obj(4);
    obj.set(1, 1, 2);
    obj.set(2, 1, 2);
    obj.set(2, 2, 2);
    obj.set(3, 1, 2);
    obj.set(3, 2, 2);
    obj.set(3, 3, 2);
    obj.set(4, 1, 2);
    obj.set(4, 2, 2);
    obj.set(4, 3, 2);
    obj.set(4, 4, 2);

    obj.display();
    cout << endl;
    cout << obj.get(2, 2) << endl;
    cout << obj.get(1, 2) << endl;
    cout << obj.get(3, 4) << endl;
    cout << endl;
    return 0;
}