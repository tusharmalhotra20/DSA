/*Print the following pattern*/


			/*	     *
				    **
				   ***
				  ****
				 *****
					 	*/


#include<iostream.h>
#include<conio.h>
void main()
{
	int i, j, k;
	clrscr() ;

	for(i=1; i<=10; i++)
	{
		for(k=i; k<=10; k++)
		{
			cout<<" " ;
		}
		for(j=1; j<=i; j++)
		{
			cout<<"*" ;
		}
		cout<<"\n" ;
	}
	getch() ;
}