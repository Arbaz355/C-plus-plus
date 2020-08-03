#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int a=10, b=0, c;
	try
	{
		if (b==0)
		throw b;
		c=a/b;
	}
	catch (int x)
	{
		cout<<"Number can not be devided by zero";
	}
}
