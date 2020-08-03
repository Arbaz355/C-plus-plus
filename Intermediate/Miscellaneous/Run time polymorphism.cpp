#include <iostream>
using namespace std;
class Shape
{
	protected:
		int width,height;
		public:
		shape(int a=0,int b=0)
		{
			width=a;
			height=b;
		}
		int area()
		{
			cout<<"Parant class area"<<endl;
			return 0;
		}
};
class rectangle:public Shape
{
	public:
	rectangle(int a=0,int b=0):shape (a,b)
	{}
	int area ()
	{
		cout<<"Reactangle class area:"<<endl;
		return(width*height);
	}
};
class triangle:public shape 
{
	public:
		triangle(int a=0, int b=0):shape(a,b)
		{}
		int area()
		{
			cout<<"Triangle class area:"<<endl;
			return (width*height/2);
		}
};
int main ()
{
	Shape*shape;
	rectangle rec(10,7);
	shape=&rec;
	shape->area();
	shape=&tri;
	shape->area();
}
