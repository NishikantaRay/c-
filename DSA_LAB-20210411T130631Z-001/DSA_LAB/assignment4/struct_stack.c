#include<stdio.h>
#include<stdlib.h>
#define size 100
int i;
struct stack
{
	int stack[size];
	int top;
};
void push(struct stack *p,int);
int pop(struct stack *p);
void display(struct stack);
void main()
{
	struct stack s;
	int ele,ch;
	s.top=-1;
	while(1)
	{
		printf("1: push\n 2: pop\n3: display \n4: exit\n");
		printf(" enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element to be inserted");
				scanf("%d",&ele);
				push(&s,ele);
				break;
			case 2:
				ele=pop(&s);
				printf("%d",ele);
				break;
			case 3:
				display(s);
				break;
			case 4:
				exit(0);
			
		}
	}
}
void push(struct stack *p,int ele)
{
	if(p->top==size-1)
	{
		printf("over flow");
		return;
	}
	else
	{
		(p->top)++;
		p->stack[p->top]=ele;
	}
	return;
}
int pop(struct stack *p)
{
	int del;
	if(p->top==-1)
	{
		printf("underflow");
		exit(0);
	}
	else
	{
		del=p->stack[p->top];
	p->top--;
	}	
	return del;
}
void display(struct stack p)
{
	int i;
	if(p.top==-1)
		printf("stack is empty");
	for(i=p.top;i<=p.top;i--)
	{
		printf("%d",p.stack[i]);
	}
	printf("\n");
	return;
}
