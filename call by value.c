#include<stdio.h>
#include<conio.h>
void swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swap value of a=%d & b=%d",a,b);
}
void main()
{
	int a,b;
	printf("enter values to be swapped:\n");
	scanf("%d %d",&a,&b);
	printf("\n before fun call value of a=%d & b=%d",a,b);
	swap(a,b);
	printf("\n after fun call value of a=%d & b=%d",a,b);
    getch();
}

