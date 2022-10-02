/*A program to accept a number and print it's cube*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n ;
 int cube(int) ;

 cout<<"Enter any number:\t" ;
 cin>>n ;

 cout<<"The cube of given number is:\t"<<cube(n) ;

 getch();
}

int cube(int n)
{
 return(n*n*n) ;
}