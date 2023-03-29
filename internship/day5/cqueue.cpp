#include<iostream>
#define max 5
using namespace std;
class cqueue
{
	private:
		int q[max];
		int rear;
		int front;
		public:
			cqueue()
			{
				int front=-1,rear=-1;	
			}
			void insert(int ele)
			{
				if((front == 0 && rear == max-1) || (front == max+1))
				{
					cout<<" Queue Overflow \n";
					return;
				}
				else if(front==-1)
				{
					front=0;
					rear=0;
				}
				else
				{
					if(rear == max-1)
					rear = 0;
					else
					rear = rear+1;
				}
				q[rear] = ele;
			}
			int cdelete()
			{
				int x;
				if(front==-1)
				{
					cout<<" underflow ";
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
					if(rear==max-1)
						rear=0;
					else
						rear=rear+1;
				}
				return x;
			}
			void display()
			{
				int i,j;
				if(front==0&&rear==-1)
				{
					cout<<" empty ";
				}
				if(front>rear)
				{
					for(i=0;i<=rear;i++)
					{
						cout<<" ";
						cout<<q[i];
					}
					for(j=front;j<=max-1;j++)
					{
						cout<<" ";
						cout<<q[i];
						cout<<"rear is"<<q[rear]<<"front is"<<q[front];
					}
				}
				else
				{
					for(i=front;i<=rear;i++)
					{
						cout<<" ";
						cout<<q[i];
					}
					cout<<" rear is "<<q[rear]<<"front is "<<q[front];
				}
			}			
};
main()
{
	cqueue c1;
	int i,ch,ele,x;
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
				c1.insert(ele);
				break;
			case 2:
				cout<<" deleted element is: ";
				x=c1.cdelete();
				cout<<x;
				break;
			case 3:
				cout<<" The element are ";
				c1.display();
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<" you enter the invalid choice ";
		}
	}
}

