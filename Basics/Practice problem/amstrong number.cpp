#include <stdio.h>
int main()
{
	int number, originalNumber, reminder, result=0;
	printf("Enter any three digit number:");
	scanf("%d", &number);
	originalNumber=number;
	while(originalNumber!=0)
	{
		reminder=originalNumber%10;
		result+=reminder*reminder*reminder;
	    originalNumber/=10;
	}
	if (number==result)
	printf("%d is amstrong number ", number);
	else 
	printf("Number is not an amstrong %d", number);
}
