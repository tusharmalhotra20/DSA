/*A program to read radius of circle, calculate area and perimeter and display them.*/

#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 float r ;
 float ar(float) ;
 float pr(float) ;

 cout<<"Enter Radius:\t" ;
 cin>>r ;

 cout<<"\n\nArea of circle:\t"<<ar(r) ;
 cout<<"\nPerimeter of circle:\t"<<pr(r) ;

 getche();
}

float ar(float r)
{
 return(3.14*r*r) ;
}

float pr(float r)
{
 return(2*3.14*r) ;
}
