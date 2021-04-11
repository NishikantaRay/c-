//Nishikanta Ray
//sec-c2
//Roll no-2
//sic-190410294
#include<stdio.h> 
#include<stdlib.h> 

struct node
{
	int key;
	int count;
	struct node *left,*right;
};

struct node  *root = NULL ;

struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    temp->count = 1; 
    return temp; 
} 


struct node* insert(struct node* node, int key) 
{ 
    if (node == NULL) return newNode(key); 

    if (key == node->key) 
    { 
       (node->count)++; 
        return node; 
    } 
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else
        node->right = insert(node->right, key); 
    return node; 
} 

void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d(%d)-> ", root->key, root->count); 
        inorder(root->right); 
    } 
} 

void preorder(struct node *root)
{
    if (root!= NULL)
    {
       printf("%d(%d) -> ", root->key,root->count);    
        preorder(root->left);
        preorder(root->right); 
    }
   
}
 

void postorder(struct node *root)
{
    if (root!= NULL)
    {
        postorder(root->left); 
        postorder(root->right);
    	printf("%d(%d) -> ", root->key,root->count);
    }
   
}

struct node *minvalue(struct node *node) 
{ 
    struct node *current = node; 
    while (current->left != NULL) 
        current = current->left;
    return current; 
} 

struct node* deleteNode(struct node* root, int key) 
{ 
    if (root == NULL) return root; 
    if (key < root->key) 
        root->left = deleteNode(root->left, key); 
    else if (key > root->key) 
        root->right = deleteNode(root->right, key); 
    else
    { 
        if (root->count > 1) 
        { 
           (root->count)--; 
           return root; 
        } 
        if (root->left == NULL) 
        { 
            struct node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left; 
            free(root); 
            return temp; 
        } 
        struct node* temp = minvalue(root->right); 
        root->key = temp->key; 
        root->right = deleteNode(root->right, temp->key); 
    } 
    return root; 
} 

int small(struct node *t)
{
	struct node *t2;
    t2 = t;
    if (t->left != NULL)
    {
        t2 = t;
        return(small(t->left));
    }
    else    
        return (t->key);
}
 
int max(struct node *t)
{
	struct node *t2;
    if (t->right != NULL)
    {
        t2 = t;
        return(max(t->right));
    }
    else    
        return(t->key);
}

int maxDepth(struct node* node)  
{ 
   if (node==NULL)  
       return 0; 
   else 
   { 
       int lDepth = maxDepth(node->left); 
       int rDepth = maxDepth(node->right); 
       if (lDepth > rDepth)  
           return(lDepth+1); 
       else return(rDepth+1); 
   } 
} 

int countn(struct node *root)
{
	static int count = 0;
    if(root != NULL)
    {
        countn(root->left);
        count++;
        countn(root->right);
    }
    return count;
}

int count = 0;
int leaf(struct node* node)
{
 
    if(node != NULL)
    {
        leaf(node->left);
        if((node->left == NULL) && (node->right == NULL))
        {
            count++;
        }
        leaf(node->right);
    }
    return count;
 
} 

void main()
{
    int ch,t,key,mina;
    do
    {
    	printf("\nOPERATIONS ---");
	    printf("\n1 - Insert an element into tree\n");
	    printf("2 - Delete an element from the tree\n");
	    printf("3 - Inorder Traversal\n");
	    printf("4 - Preorder Traversal\n");
	    printf("5 - Postorder Traversal\n");
	    printf("6-  min Value\n");
	    printf("7-  max Value\n");
	    printf("8-  Height of the tree\n");
	    printf("9-  Depth of the tree\n");
	    printf("10-  Count the number of nodes\n");
	    printf("11- count the leaf node\n");
	    printf("12 - Exit\n");
        printf("\nEnter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        	case 1:
				printf("\nEnter the element to be inserted");
				int item;
				scanf("%d",&item);    
            	root=insert(root,item);
            	break;
       		case 2:
				printf("\n Enter the node for deleting");
				scanf("%d",&key);      
            	root=deleteNode(root,key);
            	break;
        	case 3:    
            	inorder(root);
            	break;
        	case 4:    
            	preorder(root);
            	break;
        	case 5:    
            	postorder(root);
            	break;
            case 6:
            	mina=small(root);
            	printf("%d",mina);
            	break;
            case 7:
            	mina=max(root);
            	printf("%d",mina);
            	break;
            case 8:
            	mina=maxDepth(root);
            	printf("%d",mina);
            	break;
            case 9:
            	mina=maxDepth(root);
            	printf("%d",mina);
            	break;
            case 10:
            	mina=countn(root);
            	printf("%d",mina);
            	break;
            case 11:
            	mina=leaf(root);
            	printf("%d",mina);
            	break;
        	case 12:    
            	exit(0);
            	break;
        	default :     
            	printf("Wrong choice, Please enter correct choice  ");
            	break;    
        }   
    }while(1);
}
