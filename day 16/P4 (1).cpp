#include<iostream>
using namespace std;
void num(int k)
{
	try
	{
		if (k==0)
			throw k;
		else	if (k>0)
					throw 'P';
				else	if (k<0)
							throw 1.0f;
		cout<<"\n Inside try Block\n";
	}
	catch(...)
	{
		cout<<"\n Caught an Exception";
	}
cout<<"\n After the try-catch";
}
int main()
{
	cout<<"\n Inside main";
	num(-1);
	num(0);
	num(5);
return 0;
}
