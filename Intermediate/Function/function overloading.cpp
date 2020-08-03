#include <iostream>
using namespace std;
class base
{
	public:
	void disp()
	{
		cout <<"i am base class";
	}
};
class derived :public base
{
	public:
	void disp()
	{
	cout<<"i am parant class";
	}
};
int main ()
{
	derived d1;
	d1.disp();
}
