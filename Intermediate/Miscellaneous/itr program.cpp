#include <iostream>
#include <vector>
#include <conio.h>
#include <algorithm>
#include <list>
using namespace std;
int main ()
{
	int arry[5]={1,6,9,5,2};
	list<int> 11 (arry,arry+sizeof (arry)/sizeof(int));
	list<int>::iterator itr;
	for (itr=11.begin();itr!=11.end();itr++)
	{
		cout <<*itr<<endl;
		11.remove(9);
		itr=11.begin();
		11.erase(itr);
		11.sort();
		for (itr=11.begin();itr!=11)
		{
			cout<<*itr<<endl;
		}
		11.reverse();
		for(itr=11.begin(;itr!=111.end;itr++))
		{
		cout<<*itr<<endl;	
		}
		getch();
	}
