#include <stdio.h>
#include<conio.h>
void main()
{
	int a=100,b=74;
	if(a++>100 && b++>200)
	{
		printf("High values with a=%d b=%d",a,b);
	}
	if(a++<100 || b++<200)
	{
		printf("low values with a=%d b=%d",a,b);
	}
	getch();
}
