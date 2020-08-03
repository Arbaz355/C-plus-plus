#include <iostream>
#include <vector>
using namespace std;
int main ()
{
vector <int>v(3);
v[0]=23;
v[1]=12;
v[2]=9;
v.push_back(17);
for (int i=0; i<v.size();i++)
cout<<v[i]<<" ";
}

