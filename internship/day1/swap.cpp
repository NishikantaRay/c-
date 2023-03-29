#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<" Enter the two numbers \n";
	cin>>a>>b;
	cout<<" original number is "<<a<<" and "<<b;
	c=a+b;
	a=c-a;
	b=c-a;
	cout<<"\n After swap"<<a<<" and "<<b;
}
