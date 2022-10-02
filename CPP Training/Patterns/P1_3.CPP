/*Print the following pattern*/


			/*	*****
				*****
				*****
				*****
				*****
					*/


#include<iostream.h>
#include<conio.h>
void main()
{
	int i, j ;
	clrscr() ;

	for(i=1; i<=5; i++)
	{
		for(j=5; j>=1; j--)
		{
			cout<<"*" ;
		}
		cout<<endl ;
	}
	getch() ;
}