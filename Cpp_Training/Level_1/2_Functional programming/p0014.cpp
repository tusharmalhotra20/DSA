/*A program to input a number. if the number is even, print its square otherwise print its cube.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr() ;
 int n ;
 int condition(int) ;

 cout<<"Enter any number:\t" ;
 cin>>n ;

 cout<<"\n\nValue:\t"<<condition(n) ;

 getche();
}
int condition(int num)
{
 int chk ;

 chk = num%2 == 0 ? num*num : num*num*num ;

 return(chk) ;
}