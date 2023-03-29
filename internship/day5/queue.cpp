#include<iostream>
#define size 10
using namespace std;
class queue
{
	private:
		int q[size];
		int front;
		int rear;
		public:
			queue(){
				front=0;
				rear=-1;
			}
			void insert(int ele)
			{
				if(rear==size-1)
				{
					cout<<"over flow";
					return;
				}
				if(front==-1&&rear==-1)
				{	
					front++;
					rear++;
				}
				else
				{
					rear++;
					q[rear]=ele;
				}
			}
			int deleteq()
			{
				int x;
				if(front==-1)
				{
					cout<<"underflow";
					exit(0);
				}
				x=q[front];
				if(front==rear)
				{
					front=-1;
					rear=-1;
				}
				else
				{
					front++;
				}
				return x;
			}
			void display()
			{
				int i;
				if(front==-1)
				{
					cout<<"empty";
					return;
				}
				else
				{
					for(i=front;i<=rear;i++)
					{
						cout<<" ";
						cout<<q[i];
					}
				}
			}
};
main()
{
	queue q1;
	int i,ch,ele,y;
	while(1)
	{
		cout<<endl;
        cout<<"1 - insert"<<endl;
        cout<<"2 - delete "<<endl;
        cout<<"3 - display"<<endl;
        cout<<"4 - Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<" enter the element to be inserted ";
				cin>>ele;
				q1.insert(ele);
				break;
			case 2:
				cout<<" deleted element is: ";
				y=q1.deleteq();
				cout<<y;
				break;
			case 3:
				cout<<" The element are ";
				q1.display();
				
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<" you enter the invalid choice ";
		}
	}
}

