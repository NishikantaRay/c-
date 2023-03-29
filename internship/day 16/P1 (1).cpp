#include<iostream>
using namespace std;
int main()
{
	int x, y,z;
	cout<<"\n Enter the value for x and y";
	cin>>x>>y;
	z=x>y?0:1;
	try
	{
		if(z==0)
			cout<<"\n Subtraction value="<<x-y<<endl;
		else
			throw(z);
	}
	catch(int k)
		{
			cout<<"\n Exception caught: z="<<z<<endl;
		}
	return 0;
}
