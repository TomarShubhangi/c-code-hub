#include <stdio.h>
#include <conio.h>
main()
{
    float c,f;
	{
		printf("\n Enter temp in F:");
		scanf("%f",&f);
	    c=(f-32)/1.8;
	    printf("%.2f fahrenheit=%.2f Celsius",f,c);
	}
	getch();    	
}
