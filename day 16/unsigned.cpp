#include<iostream>
using namespace std;
int arr[10];
int main()
{
	cout<<" Enter the array "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		try
		{
			if(arr[i]>0)
			{
				cout<<"true"<<endl;
				cout<<arr[i]<<endl;
			}
			else{
				throw 0;
			}	
		}
		catch(int num)
		{
			cout<<"negetive"<<endl;
		}	
	}

}
