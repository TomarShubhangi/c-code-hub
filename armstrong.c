#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,d,temp;
    clrscr();
	printf("enter the value of n");
	scanf("%d",&n);
	temp=n;
	for( ;temp>0; )
	{
		d=temp%10;
		sum+=d*d*d;
		temp/=10;
	}
	if(sum==n)
	{
		printf("the no is armstrong");
	}
	else
	printf("the no is not armstrong");
	getch();
}
