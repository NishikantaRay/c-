#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void printsparse(int b[MAX][3]);
void readsparse(int b[MAX][3]);
void addsparse(int b1[MAX][3],int b2[MAX][3],int b3[MAX][3]);
void main()
{	  
	int b1[MAX][3],b2[MAX][3],b3[MAX][3],m,n;
	printf("Enter the size of matrix (rows,columns):");
	scanf("%d%d",&m,&n);
	b1[0][0]=m;
	b1[0][1]=n;
	readsparse(b1);
	readsparse(b2);  
	addsparse(b1,b2,b3);
	printsparse(b3);
}
void readsparse(int b[MAX][3])
{
	int i,t;
	printf("\nEnter no. of non-zero elements:");
	scanf("%d",&t);
	b[0][2]=t;	
	for(i=1;i<=t;i++)
	{
		printf("\nEnter the next triple(row,column,value):");
		scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);
	}
}
void addsparse(int b1[MAX][3],int b2[MAX][3],int b3[MAX][3])
{
	int t1,t2,i,j,k;
	t1=b1[0][2];
	t2=b2[0][2];
	i=j=k=0;
	b3[0][0]=b1[0][0];
	b3[0][1]=b1[0][1];
	while(i<=t1&&j<=t2)
    {   
		if(b1[i][0]<b2[j][0])
		{
			b3[k][0]=b1[i][0];  
			b3[k][1]=b1[i][1];
			b3[k][2]=b1[i][2];
			k++;
			i++;
		}
		else if(b2[j][0]<b1[i][0])
		{
			b3[k][0]=b2[j][0];     
			b3[k][1]=b2[j][1];
			b3[k][2]=b2[j][2];
    		k++;
			j++;
		}
		else if(b1[i][1]<b2[j][1])        
		{  
			b3[k][0]=b1[i][0];
			b3[k][1]=b1[i][1];
			b3[k][2]=b1[i][2];
			k++;
			i++;
        }
		else if(b2[j][1]<b1[i][1])
		{   
			b3[k][0]=b2[j][0]; 
			b3[k][1]=b2[j][1];
			b3[k][2]=b2[j][2];
			k++;
			j++;
		}   
		else
		{   
			b3[k][0]=b1[i][0]; 
			b3[k][1]=b1[i][1];
			b3[k][2]=b1[i][2]+b2[j][2];
			k++;
			i++;
			j++;
		}
    }
	while(i<=t1)
	{
		b3[k][0]=b1[i][0];
		b3[k][1]=b1[i][1];
		b3[k][2]=b1[i][2];
		i++;
		k++;
    }
	while(j<=t2)
    {   
		b3[k][0]=b2[j][0];
		b3[k][1]=b1[j][1];
		b3[k][2]=b1[j][2];
		j++;
		k++;
    }
	b3[0][2]=k-1;
}
void printsparse(int b[MAX][3])
{ 
	int i,t;
	t=b[0][2];
	for(i=1;i<=t;i++)
    {   
		printf("%d\n %d\n%d\n",b[i][0],b[i][1],b[i][2]);
    }
}
