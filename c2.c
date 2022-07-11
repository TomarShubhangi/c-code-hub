#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("\n enter value for n");
	scanf("%d",&n);
	if(n>10)
	{
		printf("\n value greater than 10");
	}
	printf("\n outside of if statement");
	getch();
}
