#include<iostream>
using namespace std;
main()
{
	int arr[5]={1,2,3,4,3};
	int i,sum=0;
	while(i<5)
	{
		sum=sum+arr[i];
		i++;
	}
	cout<<"sum is"<<sum;
	return 0;
	

}
