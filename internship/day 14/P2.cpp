#include<iostream>
using namespace std;
class A
{
	public:
		int b;
		void display()
		{
			cout<<"\n b="<<b<<endl;
		}
};
class B:public A
{
	public:
		int d;
		void display()
		{
			cout<<"\n b="<<b<<"\n d="<<d<<endl;
		}
};
int main()
{
	A *cp;
	A base;
	cp=&base;
	cp->b=100;
	//cp->d=200; Not possible
	cp->display(); // Base class display()
	B b;
	cp=&b;
	cp->b=200;
	//cp->d=300; Not possible 
	cp->display();

return 0;
}

