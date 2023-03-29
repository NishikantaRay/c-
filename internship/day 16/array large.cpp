#include<iostream>

using namespace std;
int arr[5];
int hi()
{	
	for(int i=0;i<5;i++)
		cout<<arr[i]<<endl;
}
void max()
{
	int temp;
	cout<<" Enter the array "<<endl;
	for(int i=0;i<5;i++)
		cin>>arr[i];
	temp=arr[0];
	for(int i=1;i<5;i++)
	{
		
		if(temp<arr[i])
		{
			temp=arr[i];
		}
		
	}
	cout<<" Max number "<<temp<<endl;
	int len=sizeof(arr)/sizeof(arr[0]);
	if(len==0)
	{
		cout<<" Exception Caught \n"<<endl;
	}
	else 
	{
		throw hi();
	}
}

int main()
{
	
	cout<<" Before try "<<endl;
	try
	{
		cout<<" inside try "<<endl;
		max();
	}
	catch(int arr[])
	{
			cout<<" After throw the array \n"<<endl;	
	}
	cout<<" After catch"<<endl;
	
}
