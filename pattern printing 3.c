#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,k,l;
	for(i=9;i>=1;i--)
	{
		for(j=9-i;j>0;j--)
	    {
		    printf("_");
		}
		for(k=i;k>0;k--)
		{
            printf("*");
		}
		printf("\n");
	}
	getch();
}
