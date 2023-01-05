/*A program that checks for experienced or not and input the age of a person.
The salary of the person should be 6000, if "The person is experinced and his age is more than 35"-
Otherwise The salary should be 4800 if "The person is experienced and his age is more than 28 but less than or equal to 35. Otherwise The salary for experienced person should be 3000 and for inexperienced the salary should be 2000*/

#include <iostream>

using namespace std;

int main()
{
    int age{};
    cin >> age;
    char exp{}; // y- yes | n- no
    cin >> exp;
    int salary{};

    salary = (exp == 'y') ? (age > 35) ? 6000 : ((age > 28) && (age <= 35) ? 4800 : 3000)
                          : 2000;

    cout << salary << endl;
    return 0;
}
