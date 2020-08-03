#include <stdio.h>
int main ()
{
	int n,reversedNumber = 0, remiander;
	printf("Enter a number ");
	scanf("%d", &n);
	while (n!=0)
	{
		remiander=n%10;
		reversedNumber= reversedNumber*10+remiander;
		n/=10;
	}
	printf("Reversed number is %d", reversedNumber);
	return 0;
}
