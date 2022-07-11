#include <stdio.h>
#include <conio.h>
main()
{
    int i,j,k,rows,count=0;
    printf("enter the no of rows you want:");
    scanf("%d",&rows);
	for(i=1;i<=rows;++i)
	{
		for(j=1;j<=rows-i;++j)
	    {
		    printf(" ");
		    ++count;
		}
		for(k=0;k<=i;k++)
		{
            printf("%d",i+k);	
		}
		printf("\n");
	}
	getch();	
}
