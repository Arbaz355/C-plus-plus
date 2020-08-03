#include <iostream>
using namespace std;
class student 
{
	private:
	int id=101;
	string name = "Ravi";
	public:
	void disp()
	{
		cout << id << name ;
	}
};
  int main()
{
	student Ravi;
	Ravi.disp();
}
