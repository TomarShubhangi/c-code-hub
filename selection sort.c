#include <stdio.h>
#include <conio.h>
main()
{
	int a[100],n,i,j,temp,min;
	printf("\n Enter size of array:");
	scanf("%d",&n);
	printf("\n Enter %d values into array a:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n array elements:");
	for(i=0;i<n;i++)
	{
    printf("\n a[%d]=%d",i,a[i]);
    }
    for(i=0;i<n-1;i++)//selection sort
	{
	    min=i;
	    for(j=i+1;j<n;j++)
		{
		    if(a[min]>a[j])
		    {
			    min=j;
		    }
		}
        temp=a[min];
	    a[min]=a[i];
	    a[i]=temp;
    } 
	printf("\n sorted elements:");
	for(i=0;i<n;i++)
	{
	    printf("\n a[%d]=%d",i,a[i]);
	} 
	getch(); 
}
