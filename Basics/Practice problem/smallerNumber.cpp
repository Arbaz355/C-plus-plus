#include <stdio.h>
#include <conio.h>
int multiply();
int main ()
{
	multiply();
	return 0;
}
int multiply()
{
	int x, y, result;
	printf("Eneter any two number to multiply the number");
	scanf("%d%d", &x, &y);
	result=x*y;
	printf("Your multiplication is %d", result);
	return 0;
}
