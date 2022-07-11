#include <stdio.h>
#include <conio.h>
main()
{
	int a[100],i,size,pos,element;
	printf("\n Enter size of array:");
	scanf("%d",&size);
	printf("\n Enter values %d into array a:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Before deletion:");
	for(i=0;i<size;i++)
	{
    printf("\n a[%d]=%d",i,a[i]);
    }
    printf("\n Enter element to be deleted:");
    scanf("%d",&element);
    for(i=0;i<size;i++)
    {
    	if(a[i]==element)
    	{
    		pos=i;
    		break;
		}
	}
	if(pos==-1)
	{
		printf("\n Element not found");
	}
	else
	{
		for(i=pos;i<size-1;i++)
		{
			a[i]=a[i+1];
		}
		printf("\n Array after deletion:");
		for(i=0;i<size-1;i++)
		{
			printf("\n a[%d]=%d",i,a[i]);
	    }
	}
	getch();
}
