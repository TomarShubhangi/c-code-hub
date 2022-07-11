#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,k,l;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
	    {
		    printf(" ");
		}
		for(k=1;k<=i;k++)
		{
            printf("*");
		}
		for(l=1;l<=i-1;l++)
		{
		    printf("*");	
		}
		printf("\n");
	}
	getch();
}
