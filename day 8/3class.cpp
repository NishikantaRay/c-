#include<iostream>
using namespace std;

class C;
class B;
class A
{
	int x[5];
	public:
		void get1()
		{
			int i;
			cout<<"enter the elements  of the array 1:\n";
			for(i=0;i<5;i++)
			{
				cin>>x[i];
			}
		}
		friend C add(A,B,C);
};
class B
{
	int y[5];
	public:
		void get2()
		{
			int i;
			cout<<"enter the elements  of the array 2:\n";
			for(i=0;i<5;i++)
			{
				cin>>y[i];
			}
		}
		friend C add(A,B,C);
};
class C
{
	int z[5];
	public:
		friend C add(A,B,C);
		friend void show(C);
};
C add(A a,B b,C c)
{
	int i,z[5];
	for(i=0;i<5;i++)
	{
	    c.z[i]=a.x[i]+b.y[i];
    }
    return c;
}
void show(C a)
{
	int i;
	cout<<"elemets of the 3rd array are:\n";
	for(i=0;i<5;i++)
	{
		cout<<a.z[i]<<" ";
	}
}
main()
{
	A a;
	B b;
	C c;
	a.get1();
	b.get2();
	c=add(a,b,c);
	show(c);
}
