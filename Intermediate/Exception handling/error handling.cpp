#include <iostream>
using namespace std;
int p,c,m, err=0;
main ()
{
do 
{
 try
{
	string name;
	cout<<"Enter the name of student:"<<endl;
	cin>>name;
	cout<<"Enter marks for physics:"<<endl;
	cin>>p;
	if(!(p>=0 && p<=100))
	throw p;
	cout<<"Enter marks for chemistry:"<<endl;
	cin>>c;
	if(!(c>=0 && c<=100))
	throw c;
	cout<<"Enter marks for maths:"<<endl;
	cin>>m;
	if(!(m>=0 && m<=100))
	throw m;
   }
catch(int x)
{
	cout<<"Invalid marks"<<endl;
	err=1;
}
}
while (err);
}
