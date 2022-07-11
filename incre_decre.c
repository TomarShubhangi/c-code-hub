#include<stdio.h>
#include<conio.h>
main()
{
	int x=10,y=20,z=15;
	printf("\n before x=%d y=%d z=%d",x,y,z);
    x=x++ -y+++--z;
    printf("\n x=x++ -y+++--z \n x=%d y=%d z=%d",x,y,z);
    y=++y+ ++x+z++;
    printf("\n y=++y+ ++x+z++ \n x=%d y=%d z=%d",x,y,z);
    z=x++- --y+--z; 
    printf("\n z=x++- --y+--z \n x=%d y=%d z=%d",x,y,z);
	getch();
}
