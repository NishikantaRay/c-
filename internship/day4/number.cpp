#include<iostream>
using namespace std;

class num
{ 
	private:
	int num;
	void setnum(int num)
	{
		cout<<"\n Number is ";
		cout<<num;
	}
	void factorial(int num)
	{
		int fact=1;
		for(int i=1;i<=num;i++)
			fact=fact*i;
		cout<<" \n factorial is:"<<fact;
	}
	
	void reverse(int num)
	{
		int sum=0;
		while(num!=0)
		{
			sum=(sum*10)+(num%10);
			num=num/10;
		}
		cout<<"\n Reverse number is:"<<sum;
	}
	void prime(int num)
	{
		int temp =0;
		for(int j=1;j<=num;j++)
		{
			if(num%j==0)
			{
				temp++;
			}	
		}
		if(temp==2)			
		{
			cout<<"\n Prime number";
		}
		else
		{
			cout<<"\n NOt prime";
		}
		
	}
	void sumdigit(int num)
	{
		int sum=0;
		while(num!=0)
		{
			sum=sum+(num%10);
			num=num/10;
		}
		cout<<"\n sum of digit is:"<<sum;
		
	}
	public:
	void getnum(int num)
	{
		setnum(num);
		factorial(num);
		reverse(num);
		prime(num);
		sumdigit(num);	
	}
	
};
main()
{
	class num n1;
	int n;
	cout<<" Enter the number ";
	cin>>n;
	n1.getnum(n);
}
