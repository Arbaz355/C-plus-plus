#include <iostream>
#include <vector>
#include <conio>
using namespace std;
int main ()
{
	int arr []={12,3,17,8};
	vector<int>v(arr,arr+4);
	vector<int>::iterator iter=v.begin();
	cout<<"frist element of v="<<*iter;
	iter++;
	iter=v.end()-1;
	getch();
}
