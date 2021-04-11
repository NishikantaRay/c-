#include<stdio.h>
#include<stdlib.h>
#define MAX 30
 
typedef struct dequeue
{
	int data[MAX];
	int rear,front;
}dequeue;

int empty(dequeue *p);
int full(dequeue *p);
void enqueueR(dequeue *p,int x);
void enqueueF(dequeue *p,int x);
int dequeueF(dequeue *p);
int dequeueR(dequeue *p);
void print(dequeue *p);
 
void main()
{
	int i,x,op,n;
	dequeue q;
	q.rear =-1;
	q.front=-1;
	while(1)
	{
		printf("\n1.Insert(rear)\n2.Insert(front)\n3.Delete(rear)\n4.Delete(front)");
		printf("\n5.Print\n6.Exit\n\nEnter your choice:");
		scanf("%d",&op);
		
		switch(op)
		{			
			case 1: printf("\nEnter element to be inserted:");
					scanf("%d",&x);			
					if(full(&q))
					{
						printf("\nQueue is full!!");
						exit(0);
					}
					enqueueR(&q,x);
					break;	
			case 2: printf("\nEnter the element to be inserted:");
					scanf("%d",&x);		
					if(full(&q))
					{
						printf("\nQueue is full!!");
						exit(0);
					}
					enqueueF(&q,x);
					break;		
			case 3: if(empty(&q))
					{
						printf("\nQueue is empty!!");
						exit(0);
					}
					x=dequeueR(&q);
					printf("\nElement deleted is %d\n",x);
					break;
			case 4: if(empty(&q))
					{
						printf("\nQueue is empty!!");
						exit(0);
					}	
					x=dequeueF(&q);
					printf("\nElement deleted is %d\n",x);
					break;		
			case 5: print(&q);
					break;
					
			default: break;
		}
	}
}

void enqueueR(dequeue *P,int x)
{
	if(empty(P))
	{
		P->rear=0;
		P->front=0;
		P->data[0]=x;
	}
	else
	{
		P->rear=(P->rear+1)%MAX;
		P->data[P->rear]=x;
	}
}
  
int empty(dequeue *P)
{
	if(P->rear==-1)
		return(1);
	
	return(0);
}
 
int full(dequeue *P)
{
	if((P->rear+1)%MAX==P->front)
		return(1);
	
	return(0);
}
 
void enqueueF(dequeue *P,int x)
{
	if(empty(P))
	{
		P->rear=0;
		P->front=0;
		P->data[0]=x;
	}
	else
	{
		P->front=(P->front-1+MAX)%MAX;
		P->data[P->front]=x;
	}
}
 
int dequeueF(dequeue *P)
{
	int x;
	x=P->data[P->front];
	if(P->rear==P->front)
	{
		P->rear=-1;
		P->front=-1;
	
	}
	else
	{
		P->front=(P->front+1)%MAX;
	}
	return(x);
}

int dequeueR(dequeue *P)
{
	int x;
	x=P->data[P->rear];
	if(P->rear==P->front)
	{
		P->rear=-1;
		P->front=-1;
	}
	else
	{
		P->rear=(P->rear-1+MAX)%MAX;
	}
	return(x);
}
void print(dequeue *P)
{
	if(empty(P))
	{
		printf("\nQueue is empty!!");
		exit(0);
	}
	int i;
	i=P->front;
	while(i!=P->rear)
	{
		printf("\n%d",P->data[i]);
		i=(i+1)%MAX;
	}
	printf("\n%d\n",P->data[P->rear]);
}
