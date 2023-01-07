/*
    Prime number: A number which is not composed of any other number is called prime no.
    OR A number which has no factors other than 1 & itself.
    for e.g. 2,3,5,7...
    
    Is A Number Prime?
        1. You've to check whether a given number is prime or not.
        2. Take a number "t" as input representing count of input numbers to be tested.
        3. Take a number "n" as input "t" number of times.
        4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.
*/
#include <iostream>
using namespace std;

void is_prime(int num)
{

    if (num <= 1)
    {
        cout << "not prime" << endl;
        return;
    }

    bool prime{true};

    for (int div = 2; div * div <= num; div++)
    {
        if (num % div == 0)
        {
            prime = false;
            break;
        }
    }
    // output
    if (prime == true)
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;
}

int main()
{
    int test_case{}, num{};
    cin >> test_case;
    while (test_case--)
    {
        // input
        cin >> num;
        is_prime(num);
    }
    return 0;
}