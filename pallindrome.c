#include<stdio.h>
#include<conio.h>
main()
{
	int n,rev=0,rem,a;
	printf("enter an integer");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(a==rev)
    printf("%d is a pallindrome",a);
    else
    printf("%d is not a pallindrome",a);
    getch();
}
