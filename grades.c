#include <stdio.h>
#include <conio.h>
main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);
	if(marks>75)
	{
		printf("Grade A");
	}
	else if(marks>60 && marks<75)
	{
		printf("Grade B");
	}
	else if(marks>45 && marks<60)
	{
		printf("Grade C");
	}
	else if(marks>35 && marks<45)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade E");
    }
	getch();
}
	
	
	
	
	
	
	
