#include <iostream>
#include <vector>
#include <conio.h>
#include <algorithm>
using namespace std;
void show (int n)
{
	cout <<n<<" ";
}
int main ()
{
int arr[]={12,3,17,8};
vector <int>v(arr,arr+4);
for_each(v.begin(),v.end(),show);
getch ();
}

