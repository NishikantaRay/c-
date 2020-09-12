#include<iostream>
using namespace std;
int print()
{
	int n,arr[12];
	cout<<" Enter the range ";
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
		cout<<" Array : "<<arr[i];
}
void print(char arr[4][10])
{
	
	for(int i=0;i<4;i++)
		cout<<" \nstring = "<<arr[i];
}
void print( char arr1[5][10],int roll[])
{
	for(int i=0;i<5;i++)
		cout<<" \nstudent = "<<arr1[i];
	cout<<" \nRoll no are:";
	for(int i=0;i<5;i++)
		cout<<roll[i]<<" \n ";
}


main()
{
	int roll[5];
	print();
	char arr[4][10]={"nishi","sunil","ayush ","ram"};
	print(arr);
	char arr1[5][10]={"nishi","sunil","ayush ","ram","hari"};
	cout<<" \nEnter the rollno for student ";
	for(int i=0;i<5;i++)
		cin>>roll[i];
	print( arr1,roll);
}
