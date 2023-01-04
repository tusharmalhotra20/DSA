/*A program to input principle amount and time. if time is more than 10 years, calculate simple interest with rate 8%.
otherwise calculate it with rate 12% per annum*/

#include <iostream>

using namespace std;

int main()
{
  int principle{}, time{};

  cin >> principle >> time;

  float interest = (time > 10) ? (principle * 0.08 * time) : (principle * 0.12 * time);

  cout << "interest:\t" << interest;
  return 0;
}
