#include <iostream>
using namespace std;
class time 
{
	int hr,min;
	void gettime()
	{
		cin>>hr>>min;
	}
	int gethr()
	{
		return hr;
	}
	int getmin()
	{
		return min 
	}
};
class time z
{
	public:
	int hour, minute;
	timez()
	{
	}
	timez(time1 t)
	{
		hour=t.gethr();
		minute=t.getmin();
	}
	main()
	{
		time1 t1;
		t1.gettime();
		timez t z;
		t2=t1;
		t2.showtime();
	}
}
