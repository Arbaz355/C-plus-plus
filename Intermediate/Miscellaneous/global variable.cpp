#include <stdio.h>
int number;
int main()
{
	number=10;
	printf("I am in main, my value is %d", number);
	fun1();
	fun2();
}
  fun1()
  {
  	number=20;
  	printf("I am in fuction my value is %d", number);
  }
 
 fun2()
 {
 	number=20;
 	printf("I am in third function my value is %d", number);
 }
	
