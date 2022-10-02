/*A program to input any two numbers of type integers and display their sum*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b ;

 int sum(int,int);                 //function prototype

 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;
         
 cout<<"\nSum of Digits:\t"<<sum(a,b) ;    //calling of function

 getche();
}

int sum(int x, int y)             //function definition
{
 return(x+y) ;
}
