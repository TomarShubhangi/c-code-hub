#include <stdio.h>
#include <conio.h>
main()
{
	int n1,n2,i,gcd,lcm;
	printf("\n Enter value for n1 & n2:");
	scanf("%d %d",&n1,&n2);
	for(i=1;(i<=n1)&&(i<=n2);i++);
	{
		if((n1%i==0)&&(n2%i==0))
		{
			gcd=i;
		}
	}
	lcm=(n1*n2)/gcd;
	printf("\n LCM of %d and %d is %d",n1,n2,gcd);
	getch();
}
