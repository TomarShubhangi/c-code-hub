#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("\n enter value for n:");
	scanf("%d",&n);
	if(n>10)
	{
		printf("\n value is greater than 10");
	}
	else if(n<10)
	{
		printf("\n value is less than 10");
    }
    else
    {
    	printf("\n value is equal to 10");
	}
	printf("\n outside of if elseif else");
	getch();
}
