#include <stdio.h>
int addition(int, int );
int main()
{
	int a,b,sum;
    printf("Enter any two number to add ");
    scanf("%d%d", &a,&b);
    sum= addition(a, b);
    printf("Your additional result is %d", sum );
    return 0;
    
}
 int addition(int a, int b)
 {
 	int result;
 	result=a+b;
 	return result;
 }
