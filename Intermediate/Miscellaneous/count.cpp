#include<stdio.h>
#include<string.h>
int main()
{
    extern int a;
	a = 10;     //Error: cannot find definition of variable 'a'
    printf("%d", a);    
}
int a;

