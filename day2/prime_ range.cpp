#include<iostream>
using namespace std;
main()
{
	int n,i,j;
	cout<<" Enter the range \n";
	cin>>n;
	cout<<"prime numbers are\n";
	for(i=2;i<=n;i++)
	{
		int temp =0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				temp++;
			}	
		}
		if(temp==2)			
		{
			cout<<i<<" \t";
		}
	}
}
