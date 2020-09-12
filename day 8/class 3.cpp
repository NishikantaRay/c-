#include<iostream>
using namespace std;

class c;
class b;
class a
{
	private:
		int arr1[5];
		public:
			void getnum()
			{
				cout<<" Enter the values for array 1: "<<endl;
				for(int i=0;i<5;i++)
					cin>>arr1[i];
			}
		friend c add(a,b,c);
};
class b
{
	private:
		int arr2[5];
		public:		
			void getnum1()
			{
				cout<<" Enter the values for array 2 :"<<endl;
				for(int i=0;i<5;i++)
					cin>>arr2[i];
			}
			friend c add(a,b,c);
};
class c
{
	private:
		int arr3[5];
	public:
		friend c add(a,b,c);
		friend void show( c);
	
};
void show(c z)
{
	cout<<"3rd array is :"<<endl;
	for(int i=0;i<5;i++)
		cout<<z.arr3[i]<<" \t";
		
}
c add( a x, b y, c q)
{
	for(int i=0;i<5;i++)
		q.arr3[i]=x.arr1[i]+y.arr2[i];
		return q;
}


int main()
{
	 a A;
	 b B;
	 c C;
	 A.getnum();
	 B.getnum1();
	C=add(A,B,C);
	show(C);
}
