/*Enter principle, rate and time to calculate simple interest*/

#include<iostream.h>
#include<conio.h>
void main()
{
  float pr,r,t,i ;
  float interest(float,float,float) ;
  clrscr();

  cout<<"\n\nEnter principle:\t" ;
  cin>>pr ;
  cout<<"\nEnter rate:\t" ;
  cin>>r ;
  cout<<"\nEnter time:\t" ;
  cin>>t ;

  i = interest(pr,r,t) ;

  cout<<"\nSimple Interest:\t"<<i ;

  getche();
}

float interest(float x, float y, float z)
{
 return((x*y*z)/100) ;
}