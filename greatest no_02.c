#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("\n enter value for a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&a>=c)
	{
		printf("\n a is greater than b &c");
	}
	else if(b>=a&&b>=c)
	{
		printf("\n b is greater than a & c");
	}
	else
	{
		printf("\n c is greater than a & b");
	}
	printf("\n outside of if else");
	getch();
}
