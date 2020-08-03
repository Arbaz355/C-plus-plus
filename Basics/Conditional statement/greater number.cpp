#include <stdio.h>
#include <stdio.h>
int greaternum(int a, int b);
int main ()
{
	int i, j, result;
	printf("Enter the two number to compare ");
	scanf("%d%d", &i,&j);
	result=greaternum( i, j);
	printf("greater number is %d", result); 
}
int greaternum(int x, int y)
{
	if (x>y)
	return x;
	else 
	return y;
}
