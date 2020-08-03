#include <iostream>
using namespace std;
int main ()
{
	int a,b,temp;
    cout<<"Enter any two integer:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping the number are:"<<endl;
    cout<<a<<"\t"<<b;
}
