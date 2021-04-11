#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *add;
};
struct node *start;
void create()
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
		if(start==NULL)
		{
			new->add=NULL;
			start=new;
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
void display()
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
void in_first()
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nSIZE NOT ALLOCATED\n");
		return;
	}
	printf("Enter the info: ");
	scanf("%d",&new->info);
	new->add=start;
	start=new;
}
void in_last()
{
	struct node *new,*temp;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nSIZE NOT ALLOCATED\n");
		return;
	}
	printf("Enter the info: ");
       	scanf("%d",&new->info);
	new->add=NULL;
	for(temp=start;temp->add!=NULL;temp=temp->add);
	temp->add=new;
}
void in_after(int key)
{
	struct node *new,*temp;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nSIZE NOT ALLOCATED\n");
		return;
	}
	printf("Enter the info: ");
	scanf("%d",&new->info);
	for(temp=start;temp!=NULL&&temp->info!=key;temp=temp->add);
	if(temp==NULL)
	{
		printf("\nELEMENT NOT FOUND\n");
		return;
	}
	new->add=temp->add;
	temp->add=new;
}
void in_before(int key)
{
	struct node *new,*temp,*t1;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nSIZE NOT ALLOCATED\n");
		return;
	}
	printf("Enter the info: ");
	scanf("%d",&new->info);
	if(start->info==key)
	{
		new->add=start;
		start=new;
		return;
	}
	for(temp=start;temp!=NULL&&temp->info!=key;t1=temp,temp=temp->add);
	if(temp==NULL)
	{
		printf("\nELEMENT NOT FOUND\n");
		return;
	}
	t1->add=new;
	new->add=temp;
}
void pos(int pos)
{
	struct node *new,*temp;
	int i;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nSIZE NOT ALLOCTAED\n");
		return;
	}
	printf("Enter the node info: ");
	scanf("%d",&new->info);
	if(pos==1)
	{
		new->add=start;
		start=new;
		return;
	}
	for(i=1,temp=start;temp!=NULL,i<pos-1;temp=temp->add,i++);
	if(temp==NULL)
	{
		printf("POSITION NOT FOUND");
		return;
	}
	new->add=temp->add;
	temp->add=new;
}
void pos_after(int pos)
{
	struct node *new,*temp;
	int i;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nSIZE NOT ALLOCTAED\n");
		return;
	}
	printf("Enter the node info: ");
	scanf("%d",&new->info);
    for(i=1,temp=start;temp!=NULL,i!=pos;temp=temp->add,i++);
    if(temp==NULL)
	{
		printf("POSITION NOT FOUND");
		return;
	}
	new->add=temp->add;
	temp->add=new;
}
void pos_before(int pos)
{
	struct node *new,*temp;
	int i;
	new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("\nSIZE NOT ALLOCATED\n");
		return;
	}
	printf("Enter the node info: ");
	scanf("%d",&new->info);
	if(pos==1)
	{
		printf("\nNOT POSSIBLE\n");
		return;
	}
	if(pos==2)
	{
		new->add=start;
		start=new;
		return;
	}
	for(i=1,temp=start;temp!=NULL,i<pos-2;temp=temp->add,i++);
	if(temp==NULL)
	{
		printf("\nPOSITION NOT FOUND\n");
		return;
	}
	new->add=temp->add;
	temp->add=new;
}
int del_first()
{
	struct node *temp;
	int del;
	if(start==NULL)
	{
		printf("\nNOTHING TO DELETE\nEXIT\n");
		exit(0);
	}
	del=start->info;
	temp=start;
	start=start->add;
	free(temp);
	return del;
}
int del_last()
{
	struct node *temp,*t1;
	int del;
	if(start==NULL)
	{
		printf("\nNOTHING TO DELETE\nEXIT\n");
		exit(0);
	}
	for(temp=start;temp->add!=NULL;t1=temp,temp=temp->add);
	del=temp->info;
	if(temp==start)
		start=NULL;
	else
		t1->add=NULL;
	free(temp);
	return del;
}
int del_after(int key)
{
    struct node *temp,*t1;
	int del;
	if(start==NULL)
	{
		printf("\nNOTHING TO DELETE\nEXIT\n");
		exit(0);
	}
	for(t1=start;t1->add!=NULL&&t1->info!=key;t1=t1->add);
	if(t1->add==NULL)
	{
		printf("\nNOTHING TO DELETE\n");
		exit(0);
	}
	temp=t1->add;
	t1->add=temp->add;
	del=temp->info;
	free(temp);
	return del;
}
int del_before(int key)
{
    struct node *temp,*t1;
	int del;
	if(start==NULL||start->info==key)
	{
		printf("\nNOTHING TO DELETE\nEXIT\n");
		exit(0);
	}
	for(t1=start;t1->add!=NULL&&((t1->add)->add)->info!=key;t1=t1->add);
	temp=t1->add;
	t1->add=temp->add;
	del=temp->info;
	free(temp);
	return del;
}
int del_pos(int pos)
{
	struct node *temp,*t1;
	int del,i;
	if(start==NULL)
	{
		printf("\nNOTHING TO DELETE\nEXIT\n");
		exit(0);
	}
	if(pos==1)
	{
		temp=start;
		start=start->add;
		del=temp->info;
		free(temp);
		return del;
	}
	for(temp=start,i=1;temp!=NULL&&i<pos;t1=temp,temp=temp->add,i++);
	if(temp==NULL)
	{
		printf("\nPOSITION NOT PRESENT\nEXIT\n");
		exit(0);
	}
	t1->add=temp->add;
	del=temp->info;
	free(temp);
	return del;
}
int delpos_after(int pos)
{
	struct node *temp,*t1;
	int del,i;
	if(start==NULL)
	{
		printf("\nNOTHING TO DELETE\n");
		exit(0);
	}
	for(temp=start,i=0;temp!=NULL&&i<pos;t1=temp,temp=temp->add,i++);
	if(temp==NULL)
	{
		printf("\nNOTHING TO DELETE\nEXIT\n");
		exit(0);
	}
	t1->add=temp->add;
	del=temp->info;
	free(temp);
	return del;	
}
int delpos_before(int pos)
{
	struct node *temp,*t1;
	int del,i;
	if(start==NULL||pos==1)
	{
		printf("\nNOTHING TO DELETE\n");
		exit(0);
	}
	for(temp=start,i=1;temp!=NULL&&i<pos-1;t1=temp,temp=temp->add,i++);
	if(temp==NULL)
	{
		printf("\nPOSITON NOT FOUND\n");
		exit(0);
	}
	t1->add=temp->add;
	del=temp->info;
	free(temp);
	return del;	
}
int count()
{
	struct node *count;
	int i;
	if(start==NULL)
		return 0;
	for(count=start,i=0;count!=NULL;count=count->add,i++);
	return i;
}
int max()
{
	int max;
	struct node *temp;
	if(start==NULL)
	{
		printf("\nNOTHING IS PRESENT\nEXIT\n");
		exit(0);
	}
	max=start->info;
	for(temp=start->add;temp!=NULL;temp=temp->add)
		if(max<temp->info)
			max=temp->info;
	return max;
}
int min()
{
	int min;
	struct node *temp;
	if(start==NULL)
	{
		printf("\nNOTHING IS PRESENT\nEXIT\n");
		exit(0);
	}
	min=start->info;
	for(temp=start->add;temp!=NULL;temp=temp->add)
		if(min>temp->info)
			min=temp->info;
	return min;
}
main()
{
	start=NULL;
	int ch,key;
	create();
	display();
	while(1)
	{
		printf("\n1-INSERT FIRST\n2-INSERT LAST\n3-INSERT AFTER A GIVEN NODE\n4-INSERT BEFORE A GIVEN NODE\n5-INSERT AT A SPECIFIC POSITION\n6-INSERT AFTER A GIVEN POSITION NODE\n7-INSERT BEFORE A GIVEN POSITION NODE\n8-DELETE FIRST\n9-DELETE LAST\n10-DELETE AFTER A GIVEN NODE\n11-DELETE BEFORE A GIVEN NODE\n12-DELETE AT A SPECIFIC POSITION\n13-DELETE AFTER A GIVEN POSITION NODE\n14-DELETE BEFORE A GIVEN POSITION NODE\n15-DISPLAY THE INFORMATION FIELD OF EACH NODE\n16-COUNT THE NUMBER OF NODES INT THE SINGLE LINKED\n17-MAXIMUM VALUE\n18-MINIMUM VALUE\n19-EXIT\n");		
		printf("Enter your choice: ");
		scanf(" %d",&ch);
		switch(ch)
		{
			case 1: in_first();
				display();
				break;
			case 2: in_last();
				display();
				break;
			case 3: printf("Enter the node info. : ");
				scanf("%d",&key);
				in_after(key);
				display();
				break;
			case 4: printf("Enter the node info. : ");
				scanf("%d",&key);
				in_before(key);
				display();
				break;
			case 5: printf("Enter the position: ");
				scanf("%d",&key);
				pos(key);
				display();
				break;
			case 6: printf("Enter the position: ");
				scanf("%d",&key);
				pos_after(key);
				display();
				break;
			case 7: printf("Enter the position: ");
				scanf("%d",&key);
				pos_before(key);
				display();
				break;
			case 8: printf("\nDELETED ELEMENT IS: %d\n",del_first());
				display();
				break;
			case 9: printf("\nDELETED ELEMENT IS: %d\n",del_last());
				display();
				break;
			case 10: printf("Enter the node info. : ");
				scanf("%d",&key); 
				printf("\nDELETED ELEMENT IS: %d\n",del_after(key));
				display();
				break;
			case 11: printf("Enter the node info. : ");
				scanf("%d",&key); 
				printf("\nDELETED ELEMENT IS: %d\n",del_before(key));
				display();
				break;
			case 12: printf("Enter the position: ");
				scanf("%d",&key);
				printf("\nDELETED ELEMENT IS: %d\n",del_pos(key));
				display();
				break;
			case 13: printf("Enter the position: ");
				scanf("%d",&key);
				printf("\nDELETED ELEMENT IS: %d\n",delpos_after(key));
				display();
				break;
			case 14: printf("Enter the position: ");
				scanf("%d",&key);
				printf("\nDELETED ELEMENT IS: %d\n",delpos_before(key));
				display();
				break;
			case 15: display();
				break;
			case 16: printf("\nTOTAL NUMBER OF NODES ARE: %d\n",count());
				break;
			case 17: printf("\nMAXIMUM VALUE: %d\n",max());
				break;
			case 18: printf("\nMINIMUM VALUE: %d\n",min());
				break;
			case 19: printf("\nEXIT\n");
				exit(0);
			default: printf("\nENTER PROPER CHOICE\n"); 
		}
	}
}
