/*A program to print ASCII code for digit between 0 to 9 and backspace. */

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr() ;
 char digit;
 int b='\b' ;
 void convert(char) ;

 cout<<"ASCII code for backspace is:\t"<<b ;
 cout<<"\n\nEnter any digit:\t" ;
 cin>>digit ;

 convert(digit) ;

 getche();
}
void convert(char d)
{

 if(d >='0' && d <='9')
 {
  int c =d ;
  cout<<"\nThe ASCII code for entered digit is:\t"<<c ;
 }
 else
 cout<<"\nNot Valid..!!" ;

}