/*A program to input any two numbers of type integers and display their subtraction*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c ;
 int difference(int,int);    //function prototype
 
 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;

 c = difference(a,b) ;      //function calling

 cout<<"\nDifference of Digits:\t"<<c ;

 getche();
}

int difference(int x ,int y)   //function defintion
{

 return(x-y)  ;

}
