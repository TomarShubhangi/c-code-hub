#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,k,l,m;
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
		for(l=4;l>=1;l--)
        {
        	printf(" ");
		}	
        for(m=4-i;m>0;m--)
        {
			printf("*");
		}
		printf("\n");
	}
	getch();
}
