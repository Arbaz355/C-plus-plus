#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b;
	printf("enter the year");
	scanf("%d",&a);
	
	if (b%4==0)
	{
		printf("%d is leap year", b);
		
	}
	else 
	{
		printf("%d is not leap year", b);
	}
	getch();
}
