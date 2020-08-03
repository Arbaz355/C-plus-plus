#include <stdio.h>
#include <conio.h>
int main()
{
	int a,choice;
	printf("Enter the number between 1 to 7:");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Frist day is sunday");
			break;
		case 2:
			printf("second day is monday");
			break;
		case 3:
		    printf("third day is tuesday");
		    break;
		case 4:
			printf("fourth day is wednesday");
			break;
		case 5:
			printf("fifth day is thusday");
			break;
		case 6:
			printf("sixth day is friday");
			break;
	    case 7:
	    	printf("seventh day is saturday");
	    	break;
	    default:
	    	printf("You have entred the wrong choice");
	    	break;
	}
	return 0;
}
