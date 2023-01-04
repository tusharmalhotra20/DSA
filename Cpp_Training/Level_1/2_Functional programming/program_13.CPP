/*A program that asks for your height in cm and converts it into feet and inches*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float cm, m[2] ;
 void convert(float, float[]) ;

 cout<<"\nEnter your height (in cm):\t" ;
 cin>>cm ;

 convert(cm, m) ;

 cout<<"\nyour height in inches:\t"<<m[0] ;
 cout<<"\nyour height in feet:\t"<<m[1] ;

 getche();
}
 
void convert(float cm, float m[2])
{
 m[0] = cm/2.54 ;
 m[1] = cm/30.38 ;
}