/*A program to display ASCII code of character and character corresponding to ASCII code*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i ;
 char ch ;
 void change(char, int) ;

 cout<<"\nEnter any character:\t" ;
 cin>>ch ;
 cout<<"Enter ASCII code for any character:\t" ;
 cin>>i   ;

 change(ch, i) ;

 getche();

}
void change(char c, int i)
{
 int j ;
 char hc ;

 j = c ;
 hc = i ;

 cout<<"\n\nASCII code of input character:\t"<<j ;
 cout<<"\nCharacter corresponding to input ASCII code:\t"<<hc ;

}