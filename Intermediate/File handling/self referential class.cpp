#include <iostream>
using namespace std;
class Linked_list
{
	public:
		Linked_list*next;
		int a;
		linked_list()
		{
			next = NULL;
			a=0;
		}
		 void seta()
		{
			cout<<"Enter the value";
			cin>>a;
		}
};
void print(Linked_list*ptr)
{
	if(ptr==NULL)
	return;
	do
	{
		cout<<ptr<<endl;
	}
	while ((ptr=ptr->next));
}
int main()
{
	Linked_list x,y,z;
	x.seta();
	y.seta();
	z.seta();
	x.next=&y;
	y.next=(&z);
}
