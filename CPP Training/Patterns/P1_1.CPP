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

	for(i=1; i<=5; i++)      //for Rows
	{
		for(j=1; j<=5; j++)        //for Columns
		{
			cout<<"*" ;
		}
		cout<<"\n" ;
	}
	getch() ;
}