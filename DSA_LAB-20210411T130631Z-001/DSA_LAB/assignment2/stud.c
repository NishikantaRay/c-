#include<stdio.h>
struct stud
{
	char nm[20],br[10];
	int rn,mk;
};
void display(struct stud *,int);
main()
{
	struct stud x[10];
	int n,i;
	printf("enter the no. of students whose data is to be stored:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the name of the student:\n");
		scanf("%s",x[i].nm);
		printf("enter the roll no. of the student:\n");
		scanf("%d",&x[i].rn);
		printf("enter the mark secured:\n");
		scanf("%d",&x[i].mk);
		printf("enter the branch of the student\n");
		scanf("%s",x[i].br);
	}
	display(x,n);
}
void display(struct stud *s,int n)
{
	int i,j;
	struct stud c[10];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(s[i].mk<s[j].mk)
			{
				c[i]=s[i];
				s[i]=s[j];
				s[j]=c[i];
			}
		}
	printf("the data in ascending order of the marks secured is\n");
	printf("name\troll\tmark\tbranch\n");
	for(i=0;i<n;i++)
		printf("%s\t%d\t%d\t%s\n",s[i].nm,s[i].rn,s[i].mk,s[i].br);
}

				






	

	

