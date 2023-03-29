#include<iostream>
using namespace std;
main()
{
	int n1,n2 ,res;
	char c;
	cout<<" Enter the Number1\t and Number2 ";
	cin>>n1>>n2;
	cout<<"Enter the operation";
	cin>>c;
	switch(c)
	{
		case '+':
			res=n1+n2;
			break;
		case '-':
			res=n1-n2;
			break;
		case '*':
			res=n1*n2;
			break;
		case '/':
			res=n1/n2;
			break;
		default:
		  	cout<<"\n Enter a correct choice\t";
		  	break;
	}
	cout<<"Result is\t"<<res;
}
