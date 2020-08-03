#include <stdio.h>
#include <conio.h>
int main ()
{
	int n, originalNumber,reminder, reversedNumber=0;
	printf("Enter an integer:");
	scanf("%d", &n);
	originalNumber=n;
	while (n!=0)
	{
		reminder=n%10;
		reversedNumber=reversedNumber*10+reminder;
		n/=10;
	}
	if (originalNumber==reversedNumber)
	printf("%d is pelinderom Number", originalNumber);
	else 
	printf("%d is not a pelinderom Number", originalNumber);
	return 0;
	getch ();
}
