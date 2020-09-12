#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

class account
{
	public:
		char name[30];
		int anum;
		float bal;
		void acc()
		{
			cout<<" Enter the customer name "<<endl;
			cin.getline(name,30);
			cout<<" Enter the account number "<<endl;
			cin>>anum;
			cout<<" Enter the balance "<<endl;
			cin>>bal;
		}
	
};

//class current:public account
//{
//	
//	
//};

class savings:public account
{
	public:
	void ci()
	{
		float t=0;
		float time;
		cout<<" Enter the time "<<endl;
		cin>>time;
		t=bal*(int)pow(7,time);
		cout<<" Intrest = "<<t;
	}
	
};

int main()
{
	account a1;
	savings s1;
	a1.acc();
	s1.ci();
}
