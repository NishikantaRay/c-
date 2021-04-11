#include<iostream>
#include<string>


int main()
{
	std:: string first;
	std::string last;
	int age;
	std::cout<<"enter the first name \n last name\n \nage";
	getline(std::cin,first);
	getline(std::cin,last);
	std::cin>>age;
	std::cout<<"firstname\n"<<first<<"lastname\n"<<last<<"age is\n"<<age;
}
