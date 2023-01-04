/*A program to accept three integers and print the largest of three, using if statement only.*/

#include <iostream>

using namespace std;

int main()
{
    int f{}, s{}, t{}, max{};

    cin >> f >> s >> t;
    max = f;

    if (s > max)
        max = s;
    if (t > max)
        max = t;

    cout << "largest:\t" << max << endl;

    return 0;
}

// #include<iostream.h>
// #include<conio.h>
// void main()
// {
//  clrscr();
//  int x,y,z,max ;

//  cout<<"Enter first number:\t" ;
//  cin>>x ;
//  cout<<"Enter second number:\t" ;
//  cin>>y ;
//  cout<<"Enter third number:\t" ;
//  cin>>z ;

//  max = x ;

//  if(y>max)
//  max = y ;

//  if(z>max)
//  max = z ;

//  cout<<"\n\nThe largest of  "<<x<<"  "<<y<<"  and  "<<z<<"  is:\t"<<max ;

//  getche() ;
// }