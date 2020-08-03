#include<iostream>
using namespace std;
template<class T>
void swap(T a,T b)
{
	T temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x1=4,y1=7;	
	cout<<"Before swap:"<<endl;
	cout<<"/nx1="<<x1<<"/ty1="<<y1;
	swap(x1,y1);	
	cout<<"/n/nAfter swap:";
	cout<<"/nx1="<<x1<<"/ty1="<<y1;
	return 0;
}
