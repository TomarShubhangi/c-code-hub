#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[10];
	int len;
	printf("enter any string:");
    gets(name);
    len=strlen(name);
	printf("\n length of string is %d",len);
	//printf("\n length of string is %d",strlen(name));
    getch();
	return 0;
}
