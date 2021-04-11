#include<stdio.h>
#include<stdlib.h>
#define size 2

struct queue
{
	int q[size];
	int f,r;
};
void insert(struct queue *,int);
int delete(struct queue *);
void display(struct queue);
main()
{
	struct queue s;
	s.f=-1;
	s.r=-1;
	int ch,ele;
	char c='y';
	while(c=='y'||c=='Y')
	{
		printf("\n1.insert \n 2.delete\n3.display\n4.exit\n");
		printf("enter the choice:\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter the element to be inserted:");
				scanf("%d",&ele);
				insert(&s,ele);
				break;
			case 2:
				ele=delete(&s);
				printf("\nDeleted element= %d\n",ele);
				break;
			case 3:
				printf("\nqueue status:\n");
			       	display(s);
				break;
			case 4:
			        exit(0);
		}
		printf("\nWant to perform more operation:");
		scanf(" %c",&c);
	}
}
void insert(struct queue *p,int ele)
{
	if(p->f==(p->r+1)%size)
	{
		printf("\nqueue is full\n");
		return;
	}
	if(p->f==-1)
	{
		p->f=p->f+1;
		p->r=p->r+1;
	}
	else
	        p->r=(p->r+1)%size;        
	p->q[p->r]=ele;
	return;
}
int delete(struct queue *p)
{
	int x;
	if(p->f==-1)
	{
		printf("\nqueue is empty\n");
		exit(0);
	}
	x=p->q[p->f];
	if(p->f==p->r)
	{
		p->f=-1;
		p->r=-1;
	}
	else
		p->f=(p->f+1)%size;
	return x;
}
void display(struct queue p)
{
	int i;
	if(p.r==-1)
	{
		printf("\nqueue is empty\n");
	}
	if(p.f<=p.r)
	{
		for(i=p.f;i<=p.r;i++)
		{
			printf("%d\t",p.q[i]);
		}
	}
	else
	{
		for(i=p.f;i<size;i++)
			printf("%d\t",p.q[i]);
		for(i=0;i<=p.r;i++)
			printf("%d\t",p.q[i]);
	}
	return;
}


	
		
				
				
		

	
