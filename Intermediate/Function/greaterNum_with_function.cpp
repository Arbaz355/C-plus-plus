#include <stdio.h>
#include <conio.h>
void greatNum();
int main ()
{
	greatNum();
	return 0;
}
void greatNum(){
	int a,b;
	printf("Enter any two no:");
	scanf("%d%d", &a, &b);
	if(a>b)
	{
		printf("greater number is %d", a);
	}
	else 
	{
		printf("greater number is %d", b);
	}
}
