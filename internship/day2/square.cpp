#include<iostream>
using namespace std;
int num,n;
main()
{
	do {
		int sum=0;
		cout<<" Enter the range \t";
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cout<<" enter the number\t";
			cin>>num;
			sum=num*num+sum;
		}
		cout<<"sum is \t"<<sum;
	} 
	while(n<=num);
}
