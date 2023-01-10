/*
    Print All Primes Till N
        1. You've to print all prime numbers between a range.
        2. Take as input "low", the lower limit of range.
        3. Take as input "high", the higher limit of range.
        4. For the range print all the primes numbers between low and high (both included).

    TC: O(n*√n)

    Prime number: A number which is not composed of any other number is called prime no.
    OR A number which has no factors other than 1 & itself.
    for e.g. 2,3,5,7...
*/
#include <iostream>
using namespace std;

void all_prime(int l, int h)
{
    for (int num = l; num <= h; num++)
    {
        bool prime{true};
        for (int div = 2; div * div <= num; div++)
        {
            if (num % div == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            // output
            cout << num << endl;
        }
    }
}

int main()
{
    int low{}, high{};

    // input
    cin >> low >> high;
    all_prime(low, high);

    return 0;
}