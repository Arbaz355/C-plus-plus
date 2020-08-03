#include <stdio.h>
#include <conio.h>
#include <stdlib.h>//this library is used for cls(ckear screen)
float Areaofcir();
int main ()
{
	Areaofcir();
}
float Areaofcir()
{
	double r,area;
	printf("Enter the value of radius:");
	scanf("%lf", &r);
	system("cls");
	area= (355/113)*r*r;
	printf("Area of circle is %lf", area);
	getch();
	
}
