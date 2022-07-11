#include<stdio.h>
#include<conio.h>
main()
{
	int a=12,b=25;
	int p,q,s,t,r,w;
	p=a&b;
	q=a|b;
	r=a^b;
	s=~a;
	t=a>>2;
	w=a<<2;
	printf("\n a&b=%d \n a|b=%d \n a^b=%d \n ~a=%d \n a>>2=%d \n a<<2=%d",p,q,r,s,t,w);
	getch();
}
