#include <iostream>
#include <conio.h>
using namespace std;
class animal
{
	public:
		int legs=4;
};
class dog: public animal 
{
	public:
		int tail=1;
};
int main ()
{
	dog d;
	cout<<d.legs<<endl;
	cout<<d.tail<<endl;
}
