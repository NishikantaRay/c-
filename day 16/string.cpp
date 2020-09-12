#include<iostream>
#include<cstring>

using namespace std;
void st()
{
	string str;
	cout<<" Enter the string "<<endl;
	getline(cin,str);
	cout<<str<<endl;
	if(str.empty())
	{
		cout<<" Exception Caught \n"<<endl;
	}
	else 
	{
		throw str;
	}
}
int main()
{
	cout<<" Before try "<<endl;
	try
	{
		cout<<" inside try "<<endl;
		st();
	
	}
		catch(string str)
		{
			cout<<" After throw the string \n"<<str<<endl;
			
		}
		
		cout<<" After catch"<<endl;
	
}
