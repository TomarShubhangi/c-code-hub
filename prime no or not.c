#include<stdio.h>
#include<conio.h>
main()
{
	int i,m,n,flag=0;
	printf("Enter the no:");
	scanf("%d",&n);
	m=n/2;
	if(n==0||n==1)
	{
		flag=1;
	}
	for(i=2;i<=m;i++)
	{
	    if(n%i==0)
	    {
	    	flag=1;
	    	break;
		}
	}
	if(flag==0)
	{
		printf("%d is prime no",n);
	}
	else
	{
		printf("%d is not a prime no",n);
	}
	getch();
}
