#include<iostream>
using namespace std;
class first
{
	int b;
	public:
		first()
		{
			b=10;
		}
		void display()
		{
			cout<<"\n b="<<b;
		}
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
			cout<<"\n d="<<d;
		}
};
int main()
{
	first *p, f;
	second s;
	p=&f;
	p->display();
	p=&s;
	p->display();
return 0;  
}
