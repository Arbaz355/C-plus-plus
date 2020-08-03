#include <iostream>
#include <vector>
#include <conio.h>
#include <algorithm>
using namespace std;
int main ()
{
	int key ;
	int arr []={12,3,17,8,34,56,9};
	vector <int>v(arr,arr+7);
	vector<int>::iterator iter;
	cout <<"enter the value";
	cin>>key;
	iter=find(v.begin(),v.end(),key);
	if (iter!=v.end())
	cout<<"element"<<" "<<key<<" "<<"found"<<endl;
	else
	cout<<"Element"<<" "<<key<<" "<<"not in vector"<<endl;
	getch();
}
