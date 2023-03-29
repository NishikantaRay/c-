#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	return *a;
	return *b;
}
main()
{
	int a,b;
	cout<<" Enter the value ";
	cin>>a>>b;
	cout<<"\n original values s"<<a<<" and "<<b;
	swap(&a,&b);
	cout<<" \nAfter swapping "<<a<<" and "<<b;
}
