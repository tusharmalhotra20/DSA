/*A program to input choice (1 or 2). if choice is 1, print the area of circle
otherwise print the perimeter of circle. accept the radius of circle from user*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int c;
 float r ;
 float choice(int, float) ;

 cout<<"Enter radius:\t"  ;
 cin>>r ;
 cout<<"\nEnter your choice:-"
     <<"\n\n1.For Area & 2.Perimeter:\t" ;
 cin>>c ;


 cout<<"\nValue according to choice:\t"<<choice(c,r) ;

 getche();
}
float choice(int c, float r)
{

 float val ;

 val = (c == 1) ? (3.14*r*r) : (2*3.14*r) ;
 return(val) ;

}






