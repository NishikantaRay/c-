 #include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top1,top2;
void pusha(int s[ ],int ele)
{
	if(top1>=top2)
	{
		printf("\nSTACK OVERFLOW\nVALUE NOT ENTERED\n");
		return;
	}
	else
	{
		top1++;
		s[top1]=ele;
	}
}
void pushb(int s[ ],int ele)
{
	if(top2<=top1)
	{
		printf("\nSTACK OVERFLOW\nVALUE NOT ENTERED\n");
		return;
	}
	else
	{
		top2--;
		s[top2]=ele;
	}
}
int popa(int s[ ])
{
	int del_ele;
	if(top1==-1)
	{
		printf("\nSTACK UNDERFLOW\n");
		exit(0);
	}
	del_ele=s[top1];
	top1--;
	return del_ele;
}
int popb(int s[ ])
{
	int del_ele;
	if(top2==SIZE)
	{
		printf("\nSTACK UNDERFLOW\n");
		exit(0);
	}
	del_ele=s[top2];
	top2++;
	return del_ele;
}
void display(int s[ ])
{
	int i;
	if(top1==-1)
		printf("\nSTACK A IS EMPTY\n");
	else
	{
		printf("\nSTACK A:\n");
		for(i=0;i<=top1;i++)
			printf("%d ",s[i]);
	}
	if(top2==SIZE)
		printf("\nSTACK B IS EMPTY\n");
	else
	{
		printf("\nSTACK B:\n");
		for(i=SIZE-1;i>=top2;i--)
			printf("%d ",s[i]);
	}
}
main()
{
	int ele,stack[SIZE],ch;
	top1=-1;
	top2=SIZE;
	while(1)
	{
		printf("\n1-PUSH A\n2-PUSH B\n3-POP A\n4-POP B\n5-DISPLAY\n6-EXIT\n\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the element: ");
			       scanf("%d",&ele);
			       pusha(stack,ele);
			       break;
			case 2:printf("Enter the element: ");
			       scanf("%d",&ele);
			       pushb(stack,ele);
			       break; 
			case 3:printf("Poped element is: %d",popa(stack));
			       break;
			case 4:printf("Poped element is: %d",popb(stack));
			       break;
			case 5:display(stack);
			       break;
			case 6:printf("EXIT\n");
			       exit(0);
			default:printf("Enter correct choice\n");
		}
	}
}
