#include <fstream>
using namespace std;
class employee
{
	public:
	int id;
	string name;
	int age;
	void get()
	{
		cout<<"Enter employee details";
		cin>>id >>name >>age;
	}
	void show()
	{
		cout<<"Detail of employee"<<endl;
		cout<<"id:"<<id <<"\tname"<<name<<"\tage"<<age;
	}
};
int main ()
{
	employee ravi;
	ravi.get();
	ravi.show();
	ofstream out;
	out.open("emp.txt",ios::app);
	out.open("emp.txt");
	out.write((char*)&ravi,sizeof(ravi));
	out.close();
	ifstream in;
	in.open ("Emp.txt");
	in.read((char*)&ravi,sizeof(ravi));
}
