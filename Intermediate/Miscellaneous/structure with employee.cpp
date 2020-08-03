#include <stdio.h>
#include <string.h>
#include <conio.h>
struct empolyee
{
	char name [20];
	int id;
	int sal;
	
};
int main ()
{
	struct empolyee e1;
	printf("Enter the Emoloyee name:");
    gets(e1.name);
	printf("Enter the Employee id:");
	scanf("%d", &e1.id);
	printf("Enter the Employee salley:");
	scanf("%d", &e1.sal);
	printf("%s\t", e1.name);
	printf("%d\t", e1.id);
	printf("%d\t", e1.sal);
	struct empolyee e2;
	printf("\nEnter the Emoloyee name:");
    gets(e2.name);
	printf("\nEnter the Employee id:");
	scanf("%d", &e2.id);
	printf("\nEnter the Employee salley:");
	scanf("%d", &e2.sal);
	printf("%s\t", e2.name);
	printf("%d\t", e2.id);
	printf("%d\t", e2.sal);
	getch ();
	return 0;
	
}
