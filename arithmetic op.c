#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d %d",&a, &b);
	c=a+b;
	printf("\n a+b=%d",c);
	c=a-b;
	printf("\n a-b=%d",c);
	c=a*b;
	printf("\n a*b=%d",c);
	c=a%b;
	printf("\n amodb=%d",c);
	c=a/b;
	printf("\n a/b=%d",c);
	getch();
}
