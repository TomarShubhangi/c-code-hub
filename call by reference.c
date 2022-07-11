#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("\n swap value of a=%d & b=%d",*p,*q);
}
void main()
{
	int a,b;
	printf("enter values to be swapped:\n");
	scanf("%d %d",&a,&b);
	printf("\n before fun call value of a=%d & b=%d",a,b);
	swap(&a,&b);
	printf("\n after fun call value of a=%d & b=%d",a,b);
    getch();
}
