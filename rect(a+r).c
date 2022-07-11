#include <stdio.h>
#include <conio.h>
main()
{
	float l,b,area,peri;
	printf("Enter lenght of the rect:");
	scanf("%f",&l);
	printf("Enter breadth of the rect:");
	scanf("%f",&b);
	area=l*b;
	peri=2*(l+b);
    printf("Area of the rectangle:%0.2f\n",area);
    printf("Perimeter of the rectangle:%0.2f\n",peri);
    getch();
}
    
		
	
	
	
	
