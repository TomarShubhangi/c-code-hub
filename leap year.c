#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter the year:");
	scanf("%d",&n);
	if((n%4==0)&&(n%400==0))
	{
	    printf("\n The year is leap year");
	}
	else if (n%100==0)
	{
	    printf("\n The year is not a leap year");	
	}
	getch();
}
