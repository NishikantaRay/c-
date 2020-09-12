#include <iostream>
using namespace std;
class A
{
	public:
		int a;
		A()
		{
			a=10;
		}
};
class B: public A
{
	public:
		int b;
		B()
		{
			a=40;
			b=30;
		}
};
int main()
{
	A x;
	B y;
	cout<<"\n a="<<x.a<<"";
	x=y; // object slicing
	//y=x; // Error
	cout<<"\n Now a="<<x.a;
	//cout<<x.b;
}
