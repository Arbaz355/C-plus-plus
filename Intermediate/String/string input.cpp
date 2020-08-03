#include <stdio.h>
#include <conio.h>
int main()
{
	char str[18];
	printf("Enter the string:");
	scanf("%[^\n]", &str);
	printf("%s", str);
	getch();
}
