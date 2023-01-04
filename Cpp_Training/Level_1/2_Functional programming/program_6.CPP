/*A program to input any integer and display its first three multiples. */

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int no, m[3] ;
 void multiple(int,int [3]) ;

 cout<<"Enter any number:\t" ;
 cin>>no ;

 multiple(no,m) ;

 cout<<"first three multiples of a given number are:\t"<<m[0]<<"\t"<<m[1]<<"\t"<<m[2] ;

 getche() ;
}

void multiple(int n, int m[3])
{

 m[0] = 1*n ;
 m[1] = 2*n ;
 m[2] = 3*n ;

}