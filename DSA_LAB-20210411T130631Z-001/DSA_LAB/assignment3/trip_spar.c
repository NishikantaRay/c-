#include<stdio.h>
int i,j;
void triplet(int s[ ][5],int t[ ][3])
{
	int k=1;
	for(i=0;i<t[0][0];i++)
		for(j=0;j<t[0][1];j++)
			if(i==t[k][0]&&j==t[k][1])
			{
				s[i][j]=t[k][2];
				k++;
			}
			else
				s[i][j]=0;
}
main()
{
	int sp[5][5],t[25][3];
	printf("Enter the size:\n\tRow: ");
	scanf("%d",&t[0][0]);
	printf("\tColumn: ");
	scanf("%d",&t[0][1]);
	printf("\tEnter the no. of non-zero elements: ");
	scanf("%d",&t[0][2]);
	printf("Enter the triplet form:\n");
	for(i=1;i<=t[0][2];i++)
	{
		printf("\n\t%d value\n\tRow: ",i);
		scanf("%d",&t[i][0]);
		printf("\tColumn: ");
		scanf("%d",&t[i][1]);
		printf("\tValue: ");
		scanf("%d",&t[i][2]);
	}
	triplet(sp,t);
	printf("Sparse is:\n");
	for(i=0;i<t[0][0];i++)
	{
		for(j=0;j<t[0][1];j++)
			printf("%d ",sp[i][j]);
		printf("\n");
	}
}
