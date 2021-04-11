//NishikantaRay
//sec-c2
//rollno-2
//sic-190410294
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *start1,*start2;
void merge();
struct node *create(struct node *);
void display(struct node *s);
main()
{
	start1=NULL;
	start2=NULL;
	printf("enter the 1st link\n");
	start1=create(start1);
	printf("\nenter the 2 nd link\n");
	start2=create(start2);
	printf("\nthe 1st link\n");
	display(start1);
	printf("\nthe 2nd link\n");
	display(start2);
	printf("\nthe merge link is\n");
	merge();
	display(start1);
}
void merge()
{
	struct node *t;
	t=start1;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=start2;
	start2=NULL;
}
struct node *create(struct node* s)
{
	struct node *new,*curr;
	int ch;
	do
	{
		new=(struct node*)malloc(sizeof(struct node));
		if(new==NULL)
		{
			printf("not allocated");
			exit(0);
		}	
		printf("\nenter the value of node\n");
		scanf("%d",&new->info);
		new->next=NULL;
		if(s==NULL)
		{
			s=new;
			curr=new;
		}
		else
		{
			curr->next=new;
			curr=new;
		}
		printf("\nenter (0 or 1)1 for continue and 0 for stop\n");
		scanf("%d",&ch);
	}while(ch==1);
	return s;
}
void display(struct node *s)
{
	while(s!=NULL)
	{
		printf("%d ",s->info);
		s=s->next;
	}
}

