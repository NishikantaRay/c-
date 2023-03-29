#include<iostream>
using namespace std;
main()
{
	int n,i,j;
	for(i=11;i<=1000;i++)
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
