#include <stdio.h>
#include <conio.h>
main()
{
	int a[100],n,i,j,temp,key;
	printf("\n Enter size of array:");
	scanf("%d",&n);
	printf("\n Enter values %d into array a:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n array elements:");
	for(i=0;i<n;i++)
	{
    printf("\n a[%d]=%d",i,a[i]);
    }
    for(i=1;i<n;i++)//insertion sort
	{
	    key=a[i];
	    for(j=i-1;j>=0; )
	    {
		    if(a[j]>key)
		    {
		    	a[j+1]=a[];
		    	j--;
		    }
		    else
		    {
		        break;
		    }
		}
		a[j+1]=key;
	}
	printf("\n sorted elements:");
	for(i=0;i<n;i++)
	{
	    printf("\n a[%d]=%d",i,a[i]);
	} 
	getch(); 
}
