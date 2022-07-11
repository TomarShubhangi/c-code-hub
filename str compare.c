#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[10],b[10];
	int i,c=0;
	printf("enter string a");
	gets(a);
	printf("enter string b");
	gets(b);
	for(i=0;(a[i]!="\0")&&(b[i]!="\0");i++)
	{
		if(a[i]!=b[i])
		{
			if(a[i]>b[i])
			{
				c++;
				break;
			}
			else
			{
				c--;
				break;
			}
		}
	}
	if(c==0)
	{
		printf("\n str a& str b are equal");
	}
	else if(c>0)
	{
		printf("\n str a > str b");
	}
	else
	{
		printf("\n str a < str b");
	}
	return 0;
}
