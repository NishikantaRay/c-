#include<stdio.h>
#include<stdlib.h>
#define size 100


struct queue
{
	int q[size];
	int front,rear;
};
void insert(struct queue *,int);
int delete(struct queue *);
void display(struct queue);

void display(struct queue p)
{
	int i;
	if(p.front==-1)
	{
		printf("empty");
		return;
	}
	else
	{
		for(i=p.front;i<=p.rear;i++)
		{
			printf(" %d",p.q[i]);
		}
	}
}
void insert(struct queue *p,int ele)
{
	if(p->rear==size-1)
	{
		printf("over flow");
		return;
	}
	if(p->front==-1 && p->rear==-1)
	{
		(p->front)++;
		(p->rear)++;
	}
	else
	{
		(p->rear)++;
		p->q[p->rear]=ele;
	}
	return;
}
int delet(struct queue *p)
{
	int x;
	if(p->front==-1)
	{
		printf("underflow");
		exit(0);
	}
	x=p->q[p->front];
	if(p->front==p->rear)
	{
		p->front=-1;
		p->rear=-1;
	}
	else
	{
		(p->front)++;
	}
	return x;
}
main()
{
	struct queue s;
	s.front=-1;
	s.rear=-1;
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
				insert(&s,ele);
				break;
			case 2:
				printf("deleted element is:");
				x=delet(&s);
				printf("%d",x);
				break;
			case 3:
				printf("The element are");
				display(s);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("you enter the invalid choice");
		}
	}
}

