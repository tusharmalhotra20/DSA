/*A progam to input a number. if entered value is odd and positive, prints its square root otherwise print n^5.*/

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int n;
 float condition(int) ;

 cout<<"Enter any number:\t" ;
 cin>>n ;

 cout<<"\n\nValue:\t"<<condition(n) ;

 getche();
}

float condition(int num)
{
 float chk ;

 chk = (num%2!=0 && num>0) ? sqrt(num) : pow(num,5) ;

 return(chk) ;

}