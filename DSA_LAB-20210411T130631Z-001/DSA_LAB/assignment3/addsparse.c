#include<stdio.h>
void input(int [][3]);
void add(int[][3],int [][3],int [][3]);
void display(int [][3]);
int main()
{
	int a[20][3],b[20][3],c[20][3];
	input(a);
	input(b);
	add(a,b,c);
	display(c);
}
void input(int x[][3])
{
	int i;
	printf(" enter no of elements");
	scanf("%d",&x[0][0]);
	printf(" enter no of columns ");
	scanf("%d",&x[0][1]);
	printf(" enter the number of non zero elements ");
	scanf("%d",&x[0][2]);
	for(i=0;i<x[0][2];i++)
	{
		printf(" enter row number column number and non zero element ");
		scanf("%d%d%d",&x[i][0],&x[i][1],&x[i][2]);
	}
}
void add(int x[][3],int y[][3],int z[][3])
{
	int i,j,k;
	if(x[0][0]==y[0][0]&&x[1][1]==y[1][1])
	{
		for(i=0;i<x[0][2];i++)
		{
			for(j=0;j<3;j++)
			{
				if(x[i][0]==y[i][0]&&x[i][1]==y[i][1])
				{
					z[k][0]=x[i][0];
					z[k][1]=x[i][1];
					z[k][2]=x[i][2]+y[i][2];
					k++;
				}
				if(x[i][1]>y[i][1])
				{
					if(x[i][0]>y[i][0])
					{
						z[k][0]=y[i][0];
						z[k][1]=y[i][1];
						z[k][2]=y[i][2];
						k++;
					}
				}
			}
		}
	}
}
void display(int z[][3])
{
	int i,j;
	for(i=0;i<z[0][2];i++)
	{
		for(j=0;j<z[0][1];j++)
			printf("%d",z[i][j]);
		printf("\n");
	}
}
