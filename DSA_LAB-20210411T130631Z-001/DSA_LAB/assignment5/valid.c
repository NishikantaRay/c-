#include<stdio.h>
#include<string.h>
#define MAX 20
#define true 1
#define false 0
int top = -1;
int stack[MAX];
char push(char item)
{
	if(top == (MAX-1))
		printf("Stack Overflow\n");
	else
	{
		top=top+1;
		stack[top]=item;
	}
}
char pop()
{
	if(top==-1)
		printf("Stack Underflow\n");
	else
		return(stack[top--]);
}
main()
{
	char exp[MAX],temp;
	int i,valid=true;
	printf("Enter an algebraic expression : ");
	scanf("%s",exp);
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push( exp[i] );
		if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
			if(top == -1)    
				valid=false;
			else
			{
				temp=pop();
				if( exp[i]==')' && (temp=='{' || temp=='[') )
					valid=false;
				if( exp[i]=='}' && (temp=='(' || temp=='[') )
					valid=false;
				if( exp[i]==']' && (temp=='(' || temp=='{') )
					valid=false;
			}
	}
	if(top>=0) 
		valid=false;
	if( valid==true )
		printf("Valid expression\n");
	else
		printf("Invalid expression\n");
}
