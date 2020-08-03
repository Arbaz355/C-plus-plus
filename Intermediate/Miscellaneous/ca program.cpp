#include <iostream>
using namespace std;
class a
{
	public:
		int x,y,z;
		void getdata()
		{
			cin>>x>>y>>z;
		}
};
class B:public A
{
	public:
	void check ()
	{
		if(x==y)||(y==z)||(x==z)
		cout<<"invalid input";
	}
};
