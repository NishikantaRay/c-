#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rear=-1;
void insert(int q[],int ele)
{
	if((front == 0 && rear == MAX-1) || (front == rear+1))
	{
		printf("Queue Overflow \n");
		return;
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		if(rear == MAX-1)
		rear = 0;
		else
		rear = rear+1;
	}
	q[rear] = ele;
}
int delete(int q[])
{
	int x;
	if(front == -1)
	{
		printf("Queue Underflow\n");
		exit(0);
	}
	x=q[front];
	if(front == rear)
	{
		front = -1;
		rear=-1;
	}
	else
	{
		if(front == MAX-1)
		front = 0;
		else
		front = front+1;
	}
	return x;
}
void display(int q[])
{
    int i,j;
    if(front==0&&rear==-1)
    {
        printf("Queue is underflow\n");
    }
    if(front>rear)
    {
        for(i=0;i<=rear;i++)
            printf("\t%d",q[i]);
        for(j=front;j<=MAX-1;j++)
            printf("\t%d",q[j]);
        printf("\nrear is at %d\n",q[rear]);
        printf("\nfront is at %d\n",q[front]);
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t%d",q[i]);
        }
        printf("\nrear is at %d\n",q[rear]);
        printf("\nfront is at %d\n",q[front]);
    }
    printf("\n");
    return;
}
main()
{
	int ele,q[10],ch;
	while(1)
	{
		printf("1: insert\n 2: delete\n3: display \n4: exit\n");
		printf(" enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted");
				scanf("%d",&ele);
				insert(q,ele);
				break;
			case 2:
				ele=delete(q);
				printf("%d",ele);
				break;
			case 3:
				display(q);
				break;
			case 4:
				exit(0);
			
		}
	}
}

