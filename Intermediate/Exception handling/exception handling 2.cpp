#include <iostream>
using namespace std;
class calculator
{
	public:
		int a,b;
		void add()
		{
			cout<<"Enter the value for addition"<<endl;
			cin>>a>>b;
			cout<<a+b<<endl;
		}
		void div()
		{
			cout<<"Enter the value for division"<<endl;
			cin>>a>>b;
			cout <<a/b<<endl;
		}
		void sub()
		{
			cout<<"Enter the value for subtraction"<<endl;
			cin>>a>>b;
			cout<<a-b<<endl;
		}
};
main ()
{
	calculator c1;
	c1.div();
	c1.add();
	c1.sub();
}
