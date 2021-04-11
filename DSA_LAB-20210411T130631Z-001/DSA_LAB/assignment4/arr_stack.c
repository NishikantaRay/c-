#include<stdio.h>
#include<stdlib.h>
void push(int [],int);
int pop(int []);
void display(int []);
#define size 100
int top=-1;
main()
{
	int ele,stack[10],ch;
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
				push(stack,ele);
				break;
			case 2:
				ele=pop(stack);
				printf("%d",ele);
				break;
			case 3:
				display(stack);
				break;
			case 4:
				exit(0);
			
		}
	}
}
void push(int s[size],int ele)
{
	if(top==size-1)
	{
		printf("over flow");
		return;
	}
	printf("enter the inserting element");
	top++;
	s[top]=ele;
	return;
}
int pop(int s[])
{
	int del;
	if(top==-1)
	{
		printf("underflow");
	}
	del=s[top];
	top--;
	return del;
}
void display(int s[])
{
	int i;
	if(top==-1)
		printf("stack is empty");
	for(i=top;i<=top;i--)
	{
		printf("%d",s[i]);
	}
	printf("\n");
	return;
}
