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
			//A::display(); 
			cout<<"\n b="<<b<<" d="<<d<<endl;
		}
};
int main()
{
B b;
b.b=100;
b.d=200;
b.A::display();
b.display(); 

return 0;
}

