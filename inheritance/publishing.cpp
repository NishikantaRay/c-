#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class publication
{
	char title[30];
	float price;
	public:
		void getdata()
		{
			cout<<" Enter the title "<<endl;
			cin.ignore();
			cin.getline(title,30);
			cout<<" Enter the price "<<endl;
			cin>>price;
		}
		void putdata()
		{
			cout<<" Title: "<<title<<endl;
			cout<<" price: "<<price<<endl;
		}
};
class book:public publication
{
	int pagecount;
	public:
		void get1()
		{
			getdata();
			cout<<" Enter the page number "<<endl;
			cin>>pagecount;
		}
		void put1()
		{
			putdata();
			cout<<" Page number: "<<pagecount<<endl;
		}
};
class tape:public publication
{
	float playing;
	public:
		void get2()
		{
			getdata();
			cout<<" Enter the tape playing time "<<endl;
			cin>>playing;
		}
		void put2()
		{
			putdata();
			cout<<" Playing time: "<<playing;
		}
};

int main()
{
	book b1;
	tape t1;
	b1.get1();
	b1.put1();
	t1.get2();
	t1.put2();
}
