#include<iostream>
using namespace std;
void fun1(int n)
{
	cout<<" no is "<<n;
	
}

void fun2(int *n)
{
	cout<<" no is "<<*n;
	
}

void fun3(int &n)
{
	cout<<" no is "<<n;
}
int main()
{
	int n=5;
	fun1(n);//call by a value
	fun2(&n);//call by address
	fun3(n);//call by a reference
	
}


