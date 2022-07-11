#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,k,n;
	printf("enter no of lines to be printed:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n-i;j>0;j--)
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
