#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructor A"<<endl;
		}
		~A()
		{
			cout<<"destructor A"<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"constructor B"<<endl;
		}
		~B()
		{
			cout<<"Destructor B"<<endl;
		}
};
int main ()
{
	A a1;
	B b1;
}
