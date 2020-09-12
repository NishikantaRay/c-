#include<iostream>
using namespace std;
main()
{
	int n,n1,n2;
	cout<<" Enter the range\n ";
	cin>>n;
	if(n>0)
	{
		cout<<" Enter the number first number ";
		cin>>n1;
		cout<<"\n1st number "<<n1;
		--n;
	}
	if(n>0)
	{
		for(;n>0;n--)
		{
			cout<<"\nEnter the next number";
			cin>>n2;
			cout<<"\n Next number is "<<n2;
			if(n1<n2)
			{
				n1=n2;
			}
		}
		cout<<" \nmax number is\t "<<n1;
	}
}

