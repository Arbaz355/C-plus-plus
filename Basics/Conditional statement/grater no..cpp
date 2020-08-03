#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,c;
	printf("enter the first no.\n");
	scanf("%d",&a);
	printf("enter the second no.\n");
	scanf("%d",&b);
	printf("enter the third no.\n");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
		
			printf("grater no. is a %d ",a);
		}	
		else
		{
		
			printf("grater no. is c %d",c);
		}	
	}
	else
	{
		if(b>c)
		{
			printf("grater no is b %d ",b);
		}
		else
		printf("grater no. is c %d",c);
	}
	return 0;
}
