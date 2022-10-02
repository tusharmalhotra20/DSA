/*A program to read length and breadth of rectangle, calculate area and perimeter and display them.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float l,b ;
 float area(float,float);
 float perimeter(float,float) ;

 cout<<"\nEnter length of rectangle:\t" ;
 cin>>l ;
 cout<<"\nEnter breadth of rectangle:\t" ;
 cin>>b ;

 cout<<"\nArea:\t"<<area(l,b)<<"\n" ;

 cout<<"\nPerimeter:\t"<<perimeter(l,b) ;

 getche();
}

float area(float x,float y)
{
 return(x*y) ;
}

float perimeter(float x,float y)
{
 return(2*(x+y)) ;
}
