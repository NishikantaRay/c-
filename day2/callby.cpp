#include<iostream>
using namespace std;
funA(int a,int b)
{
	cout<<" Original values are\n "<<a<< " and "<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<" \nAfter swap\n "<<a << " and "<<b;
}
funB( int *a,int *b)
{
	cout<<"\nOriginal values are\n"<<(*a)<< " and "<<(*b);
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	cout<<" \nAfter swap \n"<<(*a)<<" and "<<(*b);
}
funC( int &a,int &b)
{
	cout<<" \nOriginal values are\n "<<a<<" and "<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<" \nAfter swap\n "<<a<<" and "<<b;
	
}
main()
{
	int a,b;
	cout<<"\nEnter the values \n";
	cin>>a>>b;
	funA(a,b);
	funB(&a,&b);
	funC(a,b);

}
