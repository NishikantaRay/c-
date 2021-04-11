#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *add;
};
struct node *s1,*s2;
void create(struct node**start)
{
	char ch;
	struct node *new,*curr;
	printf("\nCREATE LINKED LIST");
	printf("\n------------------\n");
	do
	{
		new=(struct node *)malloc(sizeof(struct node));
		if(new==NULL)
		{
			printf("\nSIZE NOT ALLOCATED\n");
			return;
		}
		printf("Enter the element: ");
		scanf("%d",&new->info);
		if(*start==NULL)
		{
			new->add=NULL;
			*start=new;
		}
		else
		{
			curr->add=new;
			new->add=NULL;
		}
		curr=new;
		printf("DO YOU WANT TO ENTER MORE(Y/N): ");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n");
}
void merge()
{
	struct node *temp;
	for(temp=s1;temp->add!=NULL;temp=temp->add);
	temp->add=s2;
}
void display(struct node *start)
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\nLIST IS EMPTY\n");
		return;
	}
	printf("\nLIST IS:\n");
	for(temp=start;temp!=NULL;temp=temp->add)
		printf("%d ",temp->info);
	printf("\n");
}
main()
{
	s1=s2=NULL;
	create(&s1);	
	create(&s2);	
	merge();
	display(s1);
}
