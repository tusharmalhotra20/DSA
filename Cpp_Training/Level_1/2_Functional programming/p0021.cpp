/*A program to input any two numbers of type integers and display their product*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c ;
 int multiply(int,int) ;       //function prototype

 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;

 c = multiply(a,b) ;          //calling of function

 cout<<"\nMultiplication of Digits:\t"<<c ;

 getche();
}

int multiply(int x,int y)     //function definition
{
 return(x*y) ;
}