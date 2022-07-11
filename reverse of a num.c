#include <stdio.h>
#include <conio.h>
main()
{
	int num,temp=0,a,d;
	printf("\n Enter the value of num:");
	scanf("%d",&num);
	a=num;
	for( ;num>0; )
	{
		d=num%10;
		temp=temp*10+d;
		num=num/10;
	}
	printf("reverse of %d is %d",a,temp);
	getch();
}
