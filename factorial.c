#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,fact=1;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		fact=fact*i;
	}
	printf("\n factorial of %d is:",n,fact);
	getch();
}
