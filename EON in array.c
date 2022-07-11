#include <stdio.h>
#include <conio.h>
main()
{
	int a[10],i,even=0,odd=0,neg=0;
	printf("\n Enter 10 values into array a:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if((a[i]%2==0)&&(a[i]>0))
		{
			even++;
		}
		if(a[i]%2==1)
		{
			odd++;
		}
		if(a[i]<0)
		{
			neg++;
		}
	}
	printf("total no of even integer are %d\n",even);
	printf("total no of odd integer are %d\n",odd);
	printf("total no of negative integer are %d\n",neg);
	getch();
}
	
	
	
	
	
	
	
	
	
