#include <stdio.h>
#include <conio.h>
main()
{
	int r1,r2,c1,c2,a[100][100],b[100][100],c[100][100],i,j,k;
	printf("enter the no of rows & columns of a");
	scanf("%d %d",&r1,&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the no of rows & columns of b");
	scanf("%d %d",&r2,&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(r2==c1)
	{
	    for(i=0;i<r1;i++)
	    {
		    for(j=0;j<c2;j++)
		    {
		    	c[i][j]=0;
		    	for(k=0;k<c1;k++)
		    	{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
			    }
			}
		}
		for(i=0;i<r1;i++)
	    {
		    for(j=0;j<c2;j++)
		    {
		    	printf("c[%d][%d]=%d\n",i,j,c[i][j]);
		    }
		}
	}
	else
	{ 
	    printf("multiplication is not possible");
	}
	getch();
}
