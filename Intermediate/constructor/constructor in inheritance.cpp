#include <iostream>
using namespace std;
class A
{
	public:
	~A ()
	{
		cout<<"Class A destructor"<<endl;
	}
};
class B : public A
{
	public:
	~B()
	{
		cout<<"Class B destructor"<<endl;
	}
};
	class C : public A,public B
{
	  public:
	~C()
	{
		cout<<"Class C destructor"<<endl;
	}
};
main()
{
	int x=1;
	if(x)
	{
		A a1;
		B b1;
		C c1;
	}
}
