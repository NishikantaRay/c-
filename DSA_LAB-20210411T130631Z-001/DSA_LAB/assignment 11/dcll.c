#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    struct node *prev;  
    struct node *next;  
    int data;  
};  
struct node *head;  
void insertion_beginning();  
void insertion_last();  
void deletion_beginning();  
void deletion_last();  
void display();
void insertion_atspecificpos();
void deletion_atspecificpos(); 
void create();  
void main ()  
{  
    while(1)  
    {	
	  create();
	  display();
	  int choice;
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in Beginning\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Insert_at specific position\n6.deletion_at specific position\n7.display\n8.exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insertion_beginning();  
            break;  
            case 2:  
            insertion_last();  
            break;  
            case 3:  
            deletion_beginning();  
            break;  
            case 4:  
            deletion_last();  
            break;  
            case 5:  
            insertion_atspecificpos();  
            break;  
            case 6:  
            deletion_atspecificpos();  
            break;  
            case 7:  
            display();  
            break;
			case 8:
			exit(0);  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}

void insertion_beginning()  
{  
   struct node *ptr,*temp;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter Item value");  
    scanf("%d",&item);  
    ptr->data=item;  
   if(head==NULL)  
   {  
      head = ptr;  
      ptr -> next = head;   
      ptr -> prev = head;   
   }  
   else   
   {  
       temp = head;   
    while(temp -> next != head)  
    {  
        temp = temp -> next;   
    }  
    temp -> next = ptr;  
    ptr -> prev = temp;  
    head -> prev = ptr;  
    ptr -> next = head;  
    head = ptr;  
   }  
   printf("\nNode inserted\n");  
}  
     
}  
void insertion_last()  
{  
   struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           head = ptr;  
           ptr -> next = head;   
           ptr -> prev = head;   
       }  
       else  
       {
       		head->prev->next=ptr;
       		ptr->prev=head->prev;
       		head->prev=ptr;
       		ptr->next=head;
        }  
   }  
     printf("\nnode inserted\n");  
}  
  
void deletion_beginning()  
{  
    struct node *temp;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {
		temp = head;   
        while(temp -> next != head)  
        {  
            temp = temp -> next;  
        }  
        temp ->next = head -> next;  
        head -> next -> prev = temp;  
        free(head);  
        head = temp -> next;  
    }  
  
}  
void deletion_last()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);   
        printf("\nnode deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != head)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = head;  
        head -> prev = ptr -> prev;    
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
}  
  

void sort_list()
{    
    n *temp;
    int tempval, i, j;
 
    if (first == last && first == NULL)
        printf("\nlinked list is empty no elements to sort");
    else
    {
        for (ptr = first,i = 0;i < number;ptr = ptr->next,i++)
        {
            for (temp = ptr->next,j=i;j<number;j++)
            {
                if (ptr->val > temp->val)
                {
                    tempval = ptr->val;
                    ptr->val = temp->val;
                    temp->val = tempval;
                }
            }
        }
        for (ptr = first, i = 0;i < number;ptr = ptr->next,i++)
            printf("\n%d", ptr->val);
    }
}
/*
 *UPDATION IS DONE FRO GIVEN OLD VAL
 */
void update()
{    
    int oldval, newval, i, f = 0;
    printf("\n enter the value old value:");
    scanf("%d", &oldval);
    printf("\n enter the value new value:");
    scanf("%d", &newval);
    if (first == last && first == NULL)
        printf("\n list is empty no elemnts for updation");
    else
    {    
        for (ptr = first, i = 0;i < number;ptr = ptr->next,i++)
        {    
            if (ptr->val == oldval)
            {    
                ptr->val = newval;
                printf("value is updated to %d", ptr->val);
                f = 1;
            }    
        }
        if (f == 0)
            printf("\n no such old value to be get updated");
    }
}
/*
 *SEARCHING USING SINGLE KEY
 */
void search()
{
    int count = 0, key, i, f = 0;
 
    printf("\nenter the value to be searched:");
    scanf("%d", &key);
 
    if (first == last && first == NULL)
        printf("\nlist is empty no elemnets in list to search");
    else
    {
        for (ptr = first,i = 0;i < number;i++,ptr = ptr->next)
        {
            count++;
            if (ptr->val == key)
            {
                printf("\n the value is found at position at %d", count);
                f = 1;
            }    
        }
        if (f == 0)
            printf("\n the value is not found in linkedlist");
    }
}
/*
 *DISPLAYING IN BEGINNING
 */
