#include<stdio.h>
#include<stdlib.h>
#define size 100
int front=-1,rear=-1;
int q[size];
void insert(int q[],int ele)
{
	if((front==0&&rear==size-1)||(front==rear+1))
	{
		printf("over flow");
		return;
	}
	if(front==-1&&rear==-1)
	{
		front++;
		rear++;
	}
	else
	{
		if(rear==size-1)
			rear=0;
		else
			rear=rear+1;
	}
	q[rear]=ele;
}
int delete(int q[])
{
	int x;
	if(front==-1)
	{
		printf("underflow");
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
		if(rear==size-1)
			rear=0;
		else
			rear=rear+1;
	}
	return x;
}
void display(int q[])
{
	int i,j;
	if(front==0&&rear==-1)
	{
		printf("empty");
	}
	if(front>rear)
	{
		for(i=0;i<=rear;i++)
			printf("%d",q[i]);
		for(j=front;j<=size-1;j++)
			printf("%d\t",q[i]);
			printf("rear is%dfront is%d",q[rear],q[front]);
	}
	else
	{
		for(i=front;i<=rear;i++)
			printf("%d\t",q[i]);
		printf("rear is %dfront is%d",q[rear],q[front]);
	}
}
main()
{
	int i,ch,ele,x;
	while(1)
	{
		printf("\n1:insert\n2:delete\n3:display\n4:exit\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted");
				scanf("%d",&ele);
				insert(q,ele);
				break;
			case 2:
				printf("deleted element is:");
				x=delete(q);
				printf("%d",x);
				break;
			case 3:
				printf("The element are");
				display(q);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("you enter the invalid choice");
		}
	}
}

