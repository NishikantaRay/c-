#include<iostream>
using namespace std;

void fun(int a,int b)
{
	 cout<<"\n sum is "<<a+b;
}
void fun(int a,double b)
{
	 cout<<"\n sum is "<<a+b;
}
void fun(int a,int b,float c)
{
	 cout<<"\n sum is "<<a+b+c;
}
void fun(double a,float b)
{
	 cout<<"\n sum is "<<a+b;
}
void fun(int a,float b)
{
	 cout<<"\n sum is "<<a+b;
}
int main()
{
	int a,b,c;
	cout<<" Enter a= and  b= \n";
	cin>>a>>b;
	fun(a,b);
	cout<<" Enter a= and  b= \n";
	cin>>a>>b;
	fun(a,b);
	cout<<" Enter a= , b=  and  c=\n";
	cin>>a>>b>>c;
	fun(a,b,c);
	cout<<" Enter a= and  b= \n";
	cin>>a>>b;
	fun(a,b);
	cout<<" Enter a= and b= \n";
	cin>>a>>b;
	fun(a,b);
}
