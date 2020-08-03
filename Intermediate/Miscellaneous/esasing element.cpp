#include <iostream>
#include <vector>
using namespace std;
int main ()
{
int arr[]={12,3,17,8};
vector<int> v(arr,arr+4);
while(!v.empty())
{
	cout <<v.back()<<" ";
	v.pop_back();
}
cout<<endl;
}

