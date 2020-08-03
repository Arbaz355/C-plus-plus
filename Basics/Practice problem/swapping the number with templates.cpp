#include <iostream>
#include <conio.h>
using namespace std;
void display(int a)
{
	cout <<a <<endl;
	cout <<"I am frist "<<endl;
}
template <class T>
void display(T a)
{
	cout <<a<<endl;
	
}
template <class V>
 void swapping (V &x, V &y)
 {
 	V temp;
 	temp=x;
 	x=y;
 	y=temp;
 }
 main ()
 {
 	dispaly (10);
 	dispaly(10.5);
 	dispaly ("hello");
 	int a=10;
 }
