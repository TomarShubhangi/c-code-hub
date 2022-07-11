#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,r,choice;
	printf("Enter the value of a& b");
	scanf("%d %d",&a,&b);
	printf("\n 1.Addition \n 2.Subtraction \n 3.multiplication \n 4.Division \n 5.Remainder");
	printf("\n Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:r=a+b;
		printf("\n Addition=%d",r);
		break;
		case 2:r=a-b;
		printf("\n Subtraction=%d",r);
		break;
		case 3:r=a*b;
		printf("\n Multiplication=%d",r);
		break;
		case 4:r=a/b;
		printf("\n Division=%d",r);
		break;
		case 5:r=a%b;
		printf("\n Remainder=%d",r);
		break;
		default : printf("\n Invalid choice");
	}
	getch();
}
