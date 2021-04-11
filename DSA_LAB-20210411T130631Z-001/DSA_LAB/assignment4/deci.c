#include<stdio.h>
#include<stdlib.h>
void push(int [],int);
int pop(int []);
//void display(int []);
#define size 100
int top=-1;
main()
{
	int d,stack[10],n,i;
	printf("enter the number\n ");
	scanf("%d",&n);
	while(n!=0)
	{
		d=(n%2);
		push(stack,d);
		n=n/2;
	}
	while(top!=-1)
	{
		printf("%d ",pop(stack));
	}
//	display(stack);
}
void push(int s[size],int ele)
{
	if(top==size-1)
	{
		printf("over flow");
		return;
	}
	else
	{
		top++;
		s[top]=ele;
	}
	return;
}
int pop(int s[])
{
	int del;
	if(top==-1)
	{
		printf("underflow");
		return ;
	
	}
	del=s[top];
	top--;
	return del;
}
/*void display(int s[])
{
	int i;
	if(top==-1)
		printf("stack is empty");
	else
	{
		for(i=top;i>=top;i--)
		{
			printf("%d",s[i]);
		}
		printf("\n");
	}
	return;
}*/
