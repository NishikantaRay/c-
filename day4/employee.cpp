#include<iostream>
using namespace std;
class employee 
{
	int empid;
	char empname[40];
	int count;
	public:
	void getname()
	{
		cout<<"Enter the emmployee name: ";
		cin.ignore();
		cin.getline(empname,40);
		cout<<endl;
	}
	void getid()
	{
		cout<<"Enter the employee id: ";
		cin>>empid;
	}
	void display()
	{
		cout<<"Employee id: "<<empid<<endl<<"Employee name is: "<<empname<<endl<<endl;
	}
	employee()
	{
		count=1;
	}
	void ecount()
	{
		int d=count=count+1;
		cout<<"\n TOtal number of employee :"<<d;		
	}
};
main()
{
	cout<<"STATIC ALLOCATION"<<endl<<"-----------------"<<endl;
	employee e1[10];
	int n;
	cout<<"Enter the range: ";
	cin>>n;
	for(int i=0;i<n;i++){
		e1[i].getid();
		e1[i].getname();
	}
	cout<<"DISPLAY"<<endl<<"-------"<<endl;
	for(int i=0;i<n;i++)
	{
	
		e1[i].display();
		e1[10].ecount();
	}
	cout<<"DYNAMIC ALLOCTAION"<<endl<<"------------------"<<endl;
	cout<<"Enter the range: ";
	cin>>n;
	employee*e=new employee[n];
	for(int i=0;i<n;i++){
		(e+i)->getid();
		(e+i)->getname();
	}
	cout<<"DISPLAY"<<endl<<"-------"<<endl;
	for(int i=0;i<n;i++){
		(e+i)->display();
		e1[10].ecount();
	}
}
