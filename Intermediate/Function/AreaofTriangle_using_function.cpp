#include <stdio.h>
#include <conio.h>
int Areaoftri(int l, int h);
int main()
{
	int l, h,area,result;
	printf("Enter the length and hight of triangle");
	scanf("%l%h", &l, &h );
	area=Areaoftri(l,h);
	printf("Area of triangle is %d", area );
	return 0;
}
int Areaoftri(int l, int h)
{
	int result;
	result=1/2*(l*h);
	return result;

}
