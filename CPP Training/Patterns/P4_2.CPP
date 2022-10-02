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

	for(i=10; i>=1; i--)
	{
		for(k=i; k>=1; k--)
		{
			cout<<" " ;
		}
		for(j=10; j>=i; j--)
		{
			cout<<"*" ;
		}
		cout<<"\n" ;
	}
	getch() ;
}