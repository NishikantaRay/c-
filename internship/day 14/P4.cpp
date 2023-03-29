#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
};
main()
{
	A a;
	int *p=(int *)&a;
	*p=5;
	p++;
	*p=10;
	p--;
	cout<<"\n x= "<<*p;
	p++;
	cout<<"\n y="<<*p;
}

