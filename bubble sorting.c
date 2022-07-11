#include <stdio.h>
#include <conio.h>
main()
{
	int a[100],n,i,j,temp;
	printf("\n Enter size of array:");
	scanf("%d",&n);
	printf("\n Enter values %d into array a:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n array elements:");
    for(i=0;i<n;i++)
    printf("\n a[%d]=%d",i,a[i]);
    for(i=0;i<n-1;i++)//pass
	{
	    for(j=1;j<n-i-1;j++)//comparisons
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	    }
		printf("\n sorted elements:");
		for(i=0;i<n;i++)
	    printf("\n a[%d]=%d",i,a[i]); 	
	}
	getch(); 
}
