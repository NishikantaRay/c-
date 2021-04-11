 #include<stdio.h>
void triplet(int [][10],int [][3],int,int);
void triplet(int a[][10],int b[][3],int r,int c)
{
	int i,j,k=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
	b[0][0]=r;
	b[0][1]=c;
	b[0][2]=k-1;
}
void main()
{
	int s[10][10],t[20][3],m,n,i,j;
	printf("enter the row and column");
	scanf("%d %d",&m,&n);
	printf("enter the matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}

printf("the triplet matrix\n");
triplet(s,t,m,n);
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",&s[i][j]);
		}
	}
}
