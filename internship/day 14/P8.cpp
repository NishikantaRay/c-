#include<iostream>
using namespace std;
class first
{
	protected:
		int b;
	public:
		first()
		{
			b=10;	
		}
		virtual void display()=0; // pure virtual function
};
class second:public first
{
	int d;
	public:
		second()
		{
			d=20;
		}
		void display()
		{
			cout<<"\n b="<<b<<" d="<<d;
		}
};
int main()
{
	first *p;
	//first f; cannot create object as the pure virtual function is declared
	//p->display() ;
	second s;
	p=&s;
	p->display() ;
return 0;	
}
