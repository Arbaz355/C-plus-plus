#include <stdio.h>
#include <conio.h>
int Areaofrec(int l, int b)
{
	int result;
	result=l*b;
	return result;
}
int main ()
{
	int a,b,area;
	printf("Enter the length and breath of rec");
	scanf("%d%d", &a, &b);
	area=Areaofrec(a, b);
	printf("Area of rectangle is %d", area);
}
