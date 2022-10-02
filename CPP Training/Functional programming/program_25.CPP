/*A program to input principle maount and time. if time is more than 10 years, calculate simple interest with rate 8%.
otherwise calculate it with rate 12% per annum*/

#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  float pr,t ;
  float interest(float, float) ;
  cout<<"Enter principle amount:\t" ;
  cin>>pr ;
  cout<<"Enter time:\t" ;
  cin>>t ;

  cout<<"The interest would be:\t"<<interest(pr,t) ;

  getche();
}
float interest(float p, float t)
{
 float i;

 i = (t>10) ? (p*0.08*t) : (p*0.12*t) ;
 return(i) ;
}