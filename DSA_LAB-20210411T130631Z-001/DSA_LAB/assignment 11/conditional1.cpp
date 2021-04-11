#include<iostream>
#include<string>
#define mark 15

int main()
{
	int value=0;
	std::cout<<"enter a number in between (0-15)";
	std::cin>>value;
	if(value<15)
	{
		std::cout<<"fail";
	}
	else
	{
		std::cout<<"pass";
	}
}
