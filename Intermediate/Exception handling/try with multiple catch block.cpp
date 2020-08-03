#include <iostream>
using namespace std;
int main ()
{
	int a=2;
	try
	{
		if (a==0)
		throw 10;
		else if(a==2)

	throw 'A';
    else if(a==3)
    throw 4.5;
}
catch (int x)
{
	cout<<"integer value Exception"<<x;
}
catch (char y)
{
	cout<<"chacter value exception"<<y;
}
catch (double z)
{
	cout <<"Double value exception"<<z;
}
}
