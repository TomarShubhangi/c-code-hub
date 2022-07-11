#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	int n=3,m;
	printf("enter string a:");
	gets(a);
	printf("enter string b:");
	gets(b);
	printf("\n reverse of string a=%s",strrev(a));
	printf("\n upper case string b=%s",strupr(b));
	printf("\n lower case string b=%s",strlwr(b));
	printf("\n concatenation string =%s",strcat(a,b));
	printf("\n copy string 2 to 1 =%s",strcpy(a,b));
	return 0;
}
	
	
	
