/*Enter marks of five subjects and calculate it's average*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float a,b,c,d,e,f;
 float marks(float,float,float,float,float) ;

  cout<<"\n\nEnter marks1:\t" ;
  cin>>a ;
  cout<<"\nEnter marks2:\t" ;
  cin>>b ;
  cout<<"\nEnter marks3:\t" ;
  cin>>c ;
  cout<<"\nEnter marks4:\t" ;
  cin>>d ;
  cout<<"\nEnter marks5:\t" ;
  cin>>e ;

  cout<<"\nAverage marks of five subjects:\t"<<marks(a,b,c,d,e) ;

 getche();
}

float marks(float h, float i, float j ,float k, float l)
{
 return((h+i+j+k+l)/5) ;
}