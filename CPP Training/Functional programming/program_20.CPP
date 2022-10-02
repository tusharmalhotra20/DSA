/*A program to accept a character between a to j and print next four character.*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch ;
 void next(char) ;

 cout<<"Enter any character between a to j:\t" ;
 cin>>ch ;

 next(ch) ;

 getche();
}

void next(char c)
{

 char ch1,ch2,ch3,ch4 ;

 if(c >='a' && c <='j')
 {
  ch1 = c+1 ;
  ch2 = c+2 ;
  ch3 = c+3 ;
  ch4 = c+4 ;

  cout<<"\nThe next four characters are:\t"<<ch1<<"\t" ;
  cout<<ch2<<"\t"<<ch3<<"\t"<<ch4 ;
 }
 else
  cout<<"\nNot valid..!!" ;

}