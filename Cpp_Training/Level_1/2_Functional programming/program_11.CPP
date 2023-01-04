/*A program to find area of triangle.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr() ;
 float b,h ;
 float area(float) ;

 cout<<"Enter base:\t" ;
 cin>>b ;
 cout<<"\nEnter height:\t";
 cin>>h ;

 cout<<"\nThe area is:\t"<<area(b,h) ;

 getche();
}

float area(float b, float s)
{
 return(0.5*b*s) ;
}