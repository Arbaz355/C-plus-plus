#include<iostream>
using namespace std;
int main ()
{
	int a, b, temp;
	 cout<<"Enter any two number";
	 cin >>a>>b;
	 cout<<"before swapping the number are: ";
	 cout<<a<<"\t"<<b;
	 temp=a;
	 a=b;
	 b=temp;
	 cout<<"\nAfter swapping the number are:";
	 cout<<a<<"\t"<<b;
}
