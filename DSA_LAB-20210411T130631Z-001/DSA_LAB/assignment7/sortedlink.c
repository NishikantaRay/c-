//Name-NIshikanta ray
//sic-190410294
//sec-c2
//rollno-2
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *start;
void create();
void display();
void ins_sorted(int);
void delete();
void reverse();
void sort()
{
	struct node *temp,*t1;
	int min,t;
	if(start==NULL)
	{
		printf("\nLIST IS EMPTY\nEXIT\n");
		return;
	}
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		min=temp->info;
		for(t1=temp->next;t1!=NULL;t1=t1->next)
			if(min>t1->info)
			{
				t=temp->info;
				min=temp->info=t1->info;
				t1->info=t;				
			}
	}
}
main()
{
	int ch,key;
	create();
	display();
	while(1)
	{
		printf("enter the choice\n");
		printf("\n1:insert\n2:display\n3:delete\n4:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the key\n");
				scanf("%d",&key);
				ins_sorted(key);
				break;
			case 2:
				sort();
				display();
				break;
			case 3:
				delete();
				break;
			
			case 4:
				exit(0);
				break;
		}
	}
}
void ins_sorted(int key)
{
	struct node *t,*new;
	t=start;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("memory not allocated");
		exit(0);
	}
	new->info=key;
	if(start==NULL||start->info<key)
	{
		new->next=start;
		start=new;
	}
	else
	{
		while(t->next!=NULL&&t->next->info<key)
		{
			t=t->next;
		}
		new->next=t->next;
		t->next=new;
	}
}
void create()
{
	struct node *new,*curr;
	int ch;
	do
	{
		new=(struct node*)malloc(sizeof(struct node));
		if(new==NULL)
		{
			printf("memory not allocated");
			exit(0);
		}
		printf("enter the value of node\n");
		scanf("%d",&new->info);
		new->next=NULL;
		if(start==NULL)
		{
			start=new;
			curr=new;
		}
		else
		{
			curr->next=new;
			curr=new;
		}
		printf("Enter (0 or 1) 0 for stop and 1 for continue the program");
		scanf("%d",&ch);
		}while(ch==1);
}
void display()
{
	struct node *temp;
	temp=start;
	if(temp==NULL)
	{
		printf("nothing to show");
		exit(0);
	}
	while(temp!=NULL)
	{
		printf("%d ",temp->info);
		temp=temp->next;
	}
}
void delete()
{
	struct node *temp;
	temp=start;
	if(temp==NULL)
	{
		printf("nothing to delete");
		exit(0);
	}
	start=start->next;
	free(temp);
	return;
}



		
