#include <stdio.h>
#include <conio.h>
int addition(int, int );
int main ()
{
	int a,b,sum;
	printf("Enter the two no to add");
	scanf("%d%d", &a,&b);
	sum=addition(a,b);
	printf("Your sum result is %d", sum);	
}
int addition(int a, int b)
{
	int result;
	result=a+b;
	return result;
}
