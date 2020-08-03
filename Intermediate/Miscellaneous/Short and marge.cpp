#include <iostream>
#include <list>
using namespace std;
int main ()
{
	int arr1[]={6,4,9,1,7};
	int arr2[]={4,2,1,3,8};
	list<int> l1(arr1, arr1+5);
	list<int> l2(arr2, arr2+5);
	l1.sort();
	l2.sort();
	l1.merge(l2);
	l1.reverse();
	list<int>::iterator itr;
	for(itr=l1.begin();itr!=l1.end();itr++)
	{
		cout<<*itr<<endl;
	}
}
