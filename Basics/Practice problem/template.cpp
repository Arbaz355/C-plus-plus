#include <iostream>
#include <conio.h>
using namespace std;
template <class t,class v>
class addition 
{
	public:
		t var1;
		v var2;
		void add (t ob1, v ob2)
		{
			var1=ob1;
			var2=ob2;
			cout<<var1+var2<<endl;
		}
};
  main ()
  {
  	addition <int, double >ob1;
  	ob1.add(10,20.5);
  	addition<int,int>ob2;
  	ob2.add(11,20);
  	getch();
  }
