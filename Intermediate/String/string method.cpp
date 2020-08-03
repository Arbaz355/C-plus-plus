#include<stdio.h>
#include <string.h>
int main()
{ 
    char str[50]; 
  
    printf("Enter your string: "); 
    gets(str);  
    printf("\nYour reverse string is: %s",strrev(str)); 
    return(0); 
}
