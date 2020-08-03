#include <stdio.h>
#include <conio.h>
int main()
{
	double n;
	printf("Enter any number");
	scanf("%lf", &n);
	if(n>=0.)
	{
    	printf("%f is a positive number",n);

	}
	else 
	{
		printf("%f is a negative number", n);
	}
	return 1;
}
