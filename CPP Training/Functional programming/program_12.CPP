/*A program to read two numbers and print their quotient and remainder*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,m[2] ;
 void rem_qu(int, int, int []) ;

 cout<<"\nEnter any two numbers:\t" ;
 cin>>a>>b ;

 rem_qu(a,b,m)  ;

 cout<<"\nremainder:\t"<<m[0] ;
 cout<<"\nquotient:\t"<<m[1] ;

 getche();
}

void rem_qu(int a, int b, int m[2])
{
 m[0] = a%b ;
 m[1] = a/b ;
}