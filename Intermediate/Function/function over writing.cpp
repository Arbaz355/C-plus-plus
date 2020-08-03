#include <iostream>
using namespace std;
class A
{
	int a;
	public:
	void disp()
	{
		cout<< "a";
	}
};

	class B:public A
	{
		int b;
		public:
		void disp()
		{
			cout<<"b";
		}
	};
 
  main ()
{
	B b1;
	b1.A::disp();
	b1.B::disp();
}
