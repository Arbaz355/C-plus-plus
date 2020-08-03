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
			try
			{
			cout<<"Enter the value for division"<<endl;
			cin>>a>>b;
			if(b==0)
			throw b;
			else 
			cout<<a/b<<endl;
			}
			catch (int x)
			{
				cout<<"Exception is occered"<<x<<endl;
			}
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
	c1.div();
	c1.sub();
}
