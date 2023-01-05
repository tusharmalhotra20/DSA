/*Enter two numbers and swap both the numbers without using empty variable.(It is a call by value method)*/

#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b ;
 void swap(int, int) ;
 clrscr();

 cout<<"\nEnter 1st number:\t";
 cin>>a ;
 cout<<"\nEnter 2nd number:\t" ;
 cin>>b ;

 swap(a,b) ;

 getche();
}

void swap(int x, int y)
{
 x = x + y ;
 y = x - y ;
 x = x - y ;

 cout<<"\nAfter swaping 1st number is:\t"<<x ;
 cout<<"\nAfter swaping 2nd number is:\t"<<y ;

}









