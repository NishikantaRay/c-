#include<iostream>
using namespace std;

class test 
{
	int n1,n2;
	public:
		test()
		{
			n1=0;
			n2=0;
		}
		test(int n1,int n2)
		{
			this->n1=n1;
			this->n2=n2;
		}
		void show()
		{
			cout<<"the values are: n1="<<n1<<"   "<<"n2="<<n2<<"  \n";
		}
		test operator ,(test ob2)
		{
			test t;
			t.n1=ob2.n1;
			t.n2=ob2.n2;
			return t;
		}
};
main()
{
	test o1,o2(10,20);
	o1.show();
	o2.show();
	test o3 = (o1,o2);
	o3.show();
}
