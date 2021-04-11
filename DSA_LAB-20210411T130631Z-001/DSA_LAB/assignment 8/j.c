#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next ;
};
struct node * start ;
void ins_first ( int ele)
{
	struct node * new,* t;
	new = (struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nMemomry not allocated\n");
		return;
	}
	new -> info = ele;
	if (start==NULL)
		new -> next = new;
	else
	{
		t=start;
		while( t -> next != start )
			t = t ->next;
		t -> next = new;
		new->next=start;
	}
	start = new;
}
void ins_last(int ele)
{
	struct node *new , *t;
	new = (struct node*)malloc(sizeof(struct node));
	if(new == NULL)
	{
		printf("Memory Allocation Fails”");
		exit(0);
	}
	new -> info = ele;
	t = start;
	while(t -> next != start)
		t = t -> next;
	t -> next = new;
	new -> next = start;
}
void del_first()
{
	struct node *temp,*t;
	if(start == NULL)
	{
		printf("List is Empty!!! Deletion not possible!!!");
		exit(0);
	}
	else
	{
		temp = start;
		if(temp -> next == start)
		{
			start = NULL;
			free(temp);
		}
		else
		{
			for(t=start;t->next!=start;t=t->next);
			t->next=start->next;
			start = start -> next;
			free(temp);
		}
	}
}
void del_last()
{
	struct node *temp, *t;
	if(start == NULL)
	{
		printf("List is Empty!!! Deletion not possible!!!");
		exit(0);
	}
	else
	{
		temp = start;
		if(temp -> next == start)
		{
			start = NULL;
			free(temp);
		}
		else
		{
			while(temp -> next != start)
			{
				t = temp;
				temp = temp -> next;
			}
			t -> next = start;
			free(temp);
		}
	}
}
void display()
{
	struct node *p= start;
	if (p == NULL)
	{
		printf("List is empty\n");
		return;
	}
	do
	{
		printf("%d\t",p->info);
		p = p -> next;
	}while(p != start);
}
void create()
{
	char ch;
	struct node *new, * curr;
	do
	{
		new = (struct node*)malloc(sizeof(struct node));
		printf("\n Enter the info:");
		scanf("%d", &new -> info);
		if(start == NULL)
		{
			start = new;
			curr = new;
		}
		else
		{
			curr->next = new;
			curr = new;
		}
		new->next = start;
		printf("\n If you wish to continue press y:");
		scanf(" %c", &ch);
	} while (ch == 'y');
}
main()
{
	start=NULL;
	int ch,key;
	create();
	display();
	while(1)
	{
		printf("\n1-insert first\n2-insert last\n3-delete first\n4-delete last\n5-display\n6-exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nEnter the element: ");
				scanf("%d",&key); 
				ins_first(key);
				break;
			case 2:printf("\nEnter the element: ");
				scanf("%d",&key);
				ins_last(key);
				break;
			case 3: del_first();
				break;
			case 4: del_last();
				break;
			case 5: display();
				break;
			case 6: printf("\nEXIT\n");
				exit(0);
			default: printf("\nENTER PROPER CHOICE\n");
		}
	}
}
