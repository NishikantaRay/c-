#include<iostream>
#include<cmath>
using namespace std;
class dis
{
	private:
		int x1,x2,y1,y2;
		public:
			void getnum()
			{
				cout<<"\n Enter the x1 position ";
				cin>>x1;
				cout<<" \n Enter the y1 position\n ";
				cin>>y1;
			
				cout<<"\n Enter the x2 position ";
				cin>>x2;
				cout<<" \n Enter the y2 position\n ";
				cin>>y2;
			}
			void setnum()
			{
				cout<<" \nx1 position is";
				cout<<x1;
				cout<<" \ny1 position is";
				cout<<y1;
				cout<<" \nx2 position is";
				cout<<x2;
				cout<<" \ny2 position is";
				cout<<y2;
			}
			float distance(dis d1) 
			{
			 
    			float sum=sqrt(pow(d1.x2 - d1.x1, 2) + pow(d1.y2 -d1. y1, 2) * 1.0);
				cout<<"\n Distance is "<< sum;
			} 
};
main()
{
	dis d1;
	d1.getnum();
	d1.setnum();
	d1.distance(d1);
	
}
