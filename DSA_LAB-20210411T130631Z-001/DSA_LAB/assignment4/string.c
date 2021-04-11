#include<stdio.h>
# define size 100
int top;
void push(char s[],char ele)
{
	if(top==size-1)
		printf(" overflow ");
	top++;
	s[top]=ele;
	return;
}
char pop(char s[])
{
	char x;
	if(top==-1)
	{
		printf(" underflow");
		return;
	}
	x=s[top];
	top--;
        return x;
}
main()
{
	int i;
	char str[size],stack[size],rev[size];
	top=-1;
	printf(" enter the string ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
		push(stack,str[i]);
	i=0;
	while(top!=-1)
	{
		rev[i]=pop(stack);
		i++;
	}
	rev[i]='\0';
	printf(" reversed string :- %s\n",rev);
}

