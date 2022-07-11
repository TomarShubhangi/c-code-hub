#include<stdio.h>
#include<conio.h>
int fact(int a)
{
	//int i=1;
	if(a==1||a==0)//base case
	return 1;
	return(a*fact(a-1));
}
int main()
{
	int b,f;
	printf("enter no:");
	scanf("%d",&b);
	f=fact(b);
	printf("fact of a no a=%d",f);
    getch();//return 0;
}



