#include <stdio.h>
#include <conio.h>
int main()
{
	int choice;
	while(choice=7)
	{
		printf("\nEnter any number between 1-7");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("Frist day is sunday");
			break;
			case 2:
			printf("Second day is monday");
			break;
			case 3:
			printf("Third day is tuesday");
			break;
			case 4:
			printf("Fourth day is wednesday");
			break;
			case 5:
			printf("Fifth day is thusday");
			break;
			case 6:
			printf("Sixth day is friday");
			case 7:
			printf("Seventh day is saturday");
			break;
			default:
			printf("You have entred the wrong choice");
			
		}
	}
	getch();
}
