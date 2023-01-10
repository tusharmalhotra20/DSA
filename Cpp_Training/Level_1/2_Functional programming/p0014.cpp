/*
    Print prime factorisation:
        1. You are required to display the prime factorization of a number.
        2. Take as input a number n.
        3. Print all its prime factors from smallest to largest.
*/

#include <iostream>
using namespace std;

void print_primef(int num)
{
    int div{};
    while (num != 1)
    {
        for (div = 2; div <= num; div++)
        {
            if (num % div == 0)
            {
                cout << div << " ";
                break;
            }
        }
        num /= div;
    }
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    print_primef(n);
    return 0;
}
