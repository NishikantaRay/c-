#include<iostream>
using namespace std;
void square()
{
	int s;
	cout<<"\n Enter a number";
	cin>>s;
	if (s>0)
		cout<<"\n Square="<<s*s;
	else
		throw(s);
}

int main()
{
	try	{
			square();
			square();
		}
	catch(int s)
	{
		cout<<"\n Caught the exception"<<endl;
	}
return 0;
}
