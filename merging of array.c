#include <stdio.h>
#include <conio.h>
main()
{
	int a[100],b[100],c[100],i,j,k,n1,n2,n3;
	printf("\n Enter size of array a and b:");
	scanf("%d %d",&n1,&n2);
	printf("\n Enter array a:");
	scanf("%d",&a[i]);
	printf("\n Enter array b:");
	scanf("%d",&b[i]);
	k=0;
	n3=n1+n2;
	for(i=0;i<n1;i++)
	{
		c[k++]=a[i];
	}
	for(i=0;i<n2;i++)
	{
		c[k++]=b[i];
	}
	for(k=0;k<n3;k++)
	{
	    printf("\n c[%d]=%d",i,c[k]);
	}
	getch();
}
