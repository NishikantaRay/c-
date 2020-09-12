#include<iostream>
using namespace std;
class number
{
	float x;
	public:
		number(float);
		number() {};
		~number()
		{
			cout<<"\n Inside Destructor";
		}
		void operator ++(int)
		{
			x++;
		}
		void operator --()
		{
			--x;
		}
		void show()
		{
			cout<<"\n x="<<x;
		}
};
number::number(float  k)
{
	if (k==0)
		throw number();
	else
		x=k;
}
int main()
{
	try
	{
		number N(2.5);
		cout<<"\n Before Incresing";
		N.show();
		cout<<"\n After Incresing"; 
		N++;
		N.show();
		cout<<"\n After Decrement";
		--N;
		N.show();
		number N1(0);
	}
	catch(number)
	{
		cout<<"\n Invalid number input";
		exit(1);
	}
return 0;
}
