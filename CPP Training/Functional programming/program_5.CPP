/*A program to input any two numbers of type integers and display their division*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c ;
 int division(int,int) ;      //function prototype

 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;

 c = division(a,b) ;         //calling of function

 cout<<"\nDivision of Digits:\t"<<c ;

 getche();
}

int division(int x, int y)   //function definition
{
 return(x/y) ;
}