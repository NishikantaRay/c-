#include<iostream>
using namespace std;
class W
{
	protected:
		int w;
	public:
		W(int k)
		{
			w=k;
		}		
		void show()
		{
			cout<<"\n In Base class W";
			cout<<"\n w="<<w;
		}
};
class X: public W
{
	protected:
		int x;
	public:
		X(int j, int k):W(j)
		{
			x=k;
		}
		void show()
		{
			cout<<"\n In class X";
			cout<<"\n w="<<w;
			cout<<"\n x="<<x;	
		}	
};
class Y:public X
{
	public:
		int y;
};
int main()
{
	W *b;
	b=new W(20);
	b->show() ;// base class
	delete b;
	
	b=new X(5,2);
	b->show() ; // base class
	((X*)b)->show(); // Derive class
	delete b;
	
	X x(3,4);
	X *d=&x;
	d->show(); // derive
return 0;
}
