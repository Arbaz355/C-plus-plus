#include <iostream>
using namespace std;
void swap(int &a, int &b);
int main ()
{	//&a and &b are the address locations of the arguments passed
	int temp, a, b;
	cout<<"a"<<"b"<<endl;
	temp = a;	//Store the value at address of a in temp
	a = b;	//Copy contents of b in a
	b = temp;	//Finally, copy the original value at address of a in b
	cout<<temp<<endl;
}
