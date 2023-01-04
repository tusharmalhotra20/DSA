/*A program to compute the area and perimeter of a square.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float s ;
 float area(float) ;
 float peri(float) ;

 cout<<"\nEnter side of square:\t" ;
 cin>>s ;

 cout<<"\nArea of square:\t"<<area(s) ;
 cout<<"\nPerimeter of square:\t"<<peri(s) ;

 getche();
}

float area(float s)
{
 return(s*s) ;
}
 
float peri(float s)
{
 return(4*s) ;
}