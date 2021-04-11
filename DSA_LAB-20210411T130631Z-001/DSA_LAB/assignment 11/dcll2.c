//Nishikanta Ray
//sec-c2
//roll no-2
//sic-190410294
#include<stdio.h>
#include<Stdlib.h>
struct node{
	int info;
	struct node *prev,*next;
};
struct node *start;
void create(){
	int ch;
	struct node *curr,*new;
	printf("\nCREATE LINK LIST");
	printf("\n----------------");
	do{
		new=(struct node *)malloc(sizeof(struct node));
		if(new==NULL){
			printf("\nMEMORY ALLOCATION FAILS\n");
			return;
		}
		printf("\nEnter the new element: ");
		scanf("%d",&new->info);
		if(start==NULL){
			new->prev=new->next=new;
			start=new;
		}
		else{
			struct node *last=start->prev;
			new->next=start;
			start->prev=new;
			new->prev=last;
			last->next=new;
		}
		printf("Do you want to enter more: ");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
}
void ins_first() 
{
	struct node *new;
  
    struct node *last = start->prev;
	new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL){
		printf("\nMEMORY ALLOCATION FAILS\n");
		return;
	}
	printf("\nEnter the element: ");
	scanf("%d", &new->info);   
    new->next = start; 
    new->prev = last; 
    last->next = start->prev = new;  
    start = new; 
} 
void ins_last(){
	struct node *new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL){
		printf("\nMEMORY ALLOCATION FAILS\n");
		return;
	}
	printf("\nEnter the element: ");
	scanf("%d",&new->info);
	if (start == NULL) 
    { 
        new->next = new->prev = new; 
        start = new; 
        return; 
    } 
    struct node *last = start->prev;   
    new->next = start;  
	start->prev = new;  
    new->prev = last; 
    last->next = new; 
} 
void ins_pos(int pos){
	struct node *new,*temp;
	int i;
	for(i=1,temp=start;temp!=NULL,i<pos;temp=temp->next,i++);
	if(temp==NULL){
		printf("\nPOSITION NOT FOUND\n");
		return;
	}
	new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL){
		printf("\nMEMORY ALLOCATION FAILS\n");
		return;
	}
	printf("\nEnter the element: ");
	scanf("%d",&new->info);
	new->next=temp;
	new->prev=temp->prev;
	if(i!=1)
		temp->prev->next=new;
	else
		start=new;
	temp->prev=new;
}
void del_first(){
	struct node *temp;  
    if(start == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(start->next == start)  
    {  
        start = NULL;   
        free(start);  
        printf("\nnode deleted\n");  
    }  
    else  
    {
		temp = start;   
        while(temp -> next != start)  
        {  
            temp = temp -> next;  
        }  
        temp ->next = start -> next;  
        start-> next -> prev = temp;  
        free(start);  
        start = temp -> next;  
    }  

}
void del_last(){
	struct node *ptr;  
    if(start == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(start->next == start)  
    {  
        start = NULL;   
        free(start);   
        printf("\nnode deleted\n");  
    }  
    else   
    {
    	ptr=start->prev;
        ptr -> prev -> next = start;  
        start -> prev = ptr -> prev;    
        free(ptr);  
        printf("\nnode deleted\n");
    }
    return;
}

int del_pos(int pos){
	struct node *temp;
	int del,i;
	if(start==NULL){
		printf("\nLIST IS EMPTY\nEXIT\n");
		exit(0);
	}
	for(i=1,temp=start;temp!=NULL&&i<pos;temp=temp->next,i++);
	if(temp==NULL){
		printf("\nPOSITION NOT FOUND\n");
		exit(0);
	}
	if(temp!=start)
		temp->prev->next=temp->next;
	if(temp->next!=NULL)
		temp->next->prev=temp->prev;
	if(temp==start)
		start=temp->next;
	del=temp->info;
	free(temp);
	return del;
}

void display() 
{ 
    struct node *temp = start; 
  
    printf("\nTraversal in forward direction \n"); 
    while (temp->next != start) 
    { 
        printf("%d ", temp->info); 
        temp = temp->next; 
    } 
    printf("%d ", temp->info); 
  
    printf("\nTraversal in reverse direction \n"); 
    struct node *last = start->prev; 
    temp = last; 
    while (temp->prev != last) 
    { 
        printf("%d ", temp->info); 
        temp = temp->prev; 
    } 
    printf("%d ", temp->info); 
} 
  
int count(){
	int n;
	struct node *temp;
	if(start==NULL)
		return 0;
	for(temp=start,n=1;temp->next!=start;temp=temp->next,n++);
	return n;
}
main()
{
	start=NULL;
	int ch,key;
	create();
	display();
	while(1){
		printf("\n1-INSERT FIRST\n2-INSERT LAST\n3-DELETE FIRST\n4-DELETE LAST\n5-INSERT AT A SPECIFIC POSITION\n6-DELETE AT SPECIFIC POSITION\n7-DISPLAY\n8-COUNT\n9-EXIT\nENTER YOUR CHOICE:");	
		scanf("%d",&ch);
		switch(ch){
			case 1: ins_first();
				break;
			case 2: ins_last();
				break;
			case 3:del_first();
				break;
			case 4:del_last(); 
				break;
			case 5: printf("\nEnter the position: ");
				scanf("%d",&key);
				ins_pos(key);
				break;
			case 6: printf("\nEnter the position: ");
				scanf("%d",&key);
				printf("\nDELETED ELEMENT IS: %d\n",del_pos(key)); 
				break;
			case 7: display();
				break;
			case 8: printf("\nNumber of nodes: %d\n",count());
				break;
			case 9:exit(0); 
				break;
			case 10: 
			default: printf("\nENTER PROPER CHOICE\n");
		}
	}
}
