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
	printf("\n Before insertion:");
	for(i=0;i<size;i++)
	{
    printf("\n a[%d]=%d",i,a[i]);
    }
    printf("\n Enter new element:");
    scanf("%d",&element);
    printf("\n Enter position:");
	scanf("%d",&pos);
	size+=1;
	pos--;
	if (pos>=0 && pos<size)
	{
	    for(i=size-1;i>pos;i--)
		{
			a[i]=a[i-1];
		}
		a[pos]=element;
	}
	else 
	{
	    printf("\n illegal position");
	}
	printf("\n Array after insertion of this element:");
	for(i=0;i<size;i++)
	{
	    printf("\n a[%d]=%d",i,a[i]);	
	} 
	getch(); 
}
