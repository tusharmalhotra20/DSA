/*Print the following pattern*/

/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <iostream>

using namespace std;

void p1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void p2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > 0; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void p3(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = n; j > 0; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void p4(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cin >> n;

	p1(n);
	cout<<endl;
	p2(n);
	cout<<endl;
	p3(n);
	cout<<endl;
	p4(n);
	cout<<endl;
	return 0;
}
