#include<iostream>
using namespace std;
main()
{
	int num,i,fact=1;
	cout<<" Enter the number\t";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=i*fact;
	}
	cout<<" factorial is \n"<<fact;
}
