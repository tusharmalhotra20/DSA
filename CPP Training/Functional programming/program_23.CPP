/*A program to input three integer and print the largest of three using conditional operator*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c ;
 int largest(int, int, int) ;

 cout<<"Enter first integer:\t" ;
 cin>>a  ;
 cout<<"\nEnter second integer:\t" ;
 cin>>b ;
 cout<<"\nEnter third integer:\t" ;
 cin>>c ;

 cout<<"\n\nHighest number:\t"<<largest(a,b,c) ;

 getche();
}
int largest(int d, int e, int f)
{
 int chk ;

 chk = (d>e) ? ((d>f) ? d : f) : ((e>f) ? e : f) ;
 return(chk) ;

}





