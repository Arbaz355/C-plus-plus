#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class A:
{
    public:
    int x,y,z;
    void getdata()
    {
        cin>>x>>y>>z;
    }
};
class B:public A
{
    void check()
    if((x==y)||(y==z)||(x==z))
    cout<<"Invalid input";
    else 
    {
    add=x+y+z;
    cube=add*add*add;    }
}


int main() {
    return 0;
}

