/*ANKIT DAS
 SEC-A2 ROLL-31
 ADD two Triplet matrix*/
#include<stdio.h>
#include<stdlib.h>
void read_mat(int[][3],int);
void triplet_add(int [][3],int [][3],int [][3],int,int);
void display(int [][3],int);
char compare (int,int);
main()
{
	int i,j,m1[10][3],m2[10][3],add[10][3],nz1,nz2;
	printf("Enter the Number of NON ZERO elements in 1st Triplet : ");
	scanf("%d",&nz1);
	printf("ENter the 1st triplet MAtrix :\n");
	read_mat(m1,nz1+1);
	printf("Enter the Number of NON ZERO elements in 2nd Triplet : ");
	scanf("%d",&nz2);
	printf("ENter the 2nd Triplet Matrix :\n");
	read_mat(m2,nz2+1);
	
	for(i=0;i<10;++i)
		for(j=0;j<3;++j)
			add[i][j]=0;

	printf("Triplet Matrix Addition :\n");
	triplet_add(m1,m2,add,nz1,nz2);
	printf("Added TRiplet martrix : \n");
	display(add,add[0][2]+1);

}
void read_mat(int x[][3],int r)
{
	int i,j;

	for(i=0;i<r;++i)
		for(j=0;j<3;++j)
		{
			scanf("%d",&x[i][j]);
		}
}
void triplet_add(int m1[][3],int m2[][3],int m3[][3],int m,int n)
{
	int i=1,j=1,k=0;
	if(m1[0][0]==m2[0][0]&&m1[0][1]==m2[0][1])
	{
		m3[0][0]=m1[0][0];
		m3[0][1]=m1[0][1];
	}
	else
	{
		printf("Entered Triplet Cannot be ADDED !!");
		exit(0);
	}
	while(i<=m&&j<=n)
	{
		++k;
		switch (compare(m1[i][0],m2[j][0]))
		{
			case '=':
				
				switch(compare(m1[i][1],m2[j][1]))
				{
					case '=':

						m3[k][0]=m1[i][0];
						m3[k][1]=m1[i][1];
						m3[k][2]=m1[i][2]+m2[j][2];
						++i;++j;
						break;
					case '<':
						m3[k][0]=m1[i][0];
						m3[k][1]=m1[i][1];
						m3[k][2]=m1[i][2];
						++i;
						break;
					case '>':
						m3[k][0]=m2[j][0];
						m3[k][1]=m2[j][1];
						m3[k][2]=m2[j][2];
						++j;
						break;
				}
				break;
			case '<':
				m3[k][0]=m1[i][0];
				m3[k][1]=m1[i][1];
				m3[k][2]=m1[i][2];
				++i;					
				break;			
			case '>':
				m3[k][0]=m2[j][0];
				m3[k][1]=m2[j][1];
				m3[k][2]=m2[j][2];
				++j;
				break;
		}
	}
	while(i<=m)
	{
		++k;
		m3[k][0]=m1[i][0];
		m3[k][1]=m1[i][1];
		m3[k][2]=m1[i][2];
		++i;
	}
	while(j<=n)
	{
		++k;
		m3[k][0]=m2[j][0];
		m3[k][1]=m2[j][1];
		m3[k][2]=m2[j][2];
		++j;
	}	
	m3[0][2]=k;
	
}
char compare(int x,int y)
{
	if(x<y)
		return ('<');
	else if(x>y)
		return ('>');
	else if(x==y)
		return ('=');
}

void display(int b[][3],int r)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
