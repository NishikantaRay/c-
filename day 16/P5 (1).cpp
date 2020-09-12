#include<iostream>
using namespace std;
void sub(int j, int k)
{
	cout<<"\n Inside the Sub function";
	try
	{
		if (j==0)
			throw j;
		else 
			cout<<"\n Subtraction="<<j-k<<endl;
	}
	catch(int)
	{
		cout<<"\n Caught an Exception- Zero Inputted"<<endl;
		throw; //rethrow
	}
	cout<<"\n End of the Sub function";
}

int main()
{
	cout<<"\n Inside Main";
	try
	{
		sub(8,5);
		sub(0,5);
	}
	catch(int)
	{
		cout<<"\n Caught a Zero value inside main"<<endl;
	}
	cout<<"\n End of main";
return 0;
}
