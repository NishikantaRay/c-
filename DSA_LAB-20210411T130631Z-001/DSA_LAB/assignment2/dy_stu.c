#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
	char fname[10],mname[10],lname[10],br[3];
	int roll_no;
	float cgpa;
};
int n;
void display()
{
	printf("\nROLL_NO\tSTUDENT NAME\t\tBRANCH\tCGPA\n");
        printf("-------\t------------\t\t------\t----\n");
}
void cgpa(struct stu *s)
{
	printf("\nStudents having cgpa more than 9\n");
	int i;
	display();
	for(i=0;i<n;i++)
		if((s+i)->cgpa>9.0)
			printf("%d\t%s %s %s\t%s\t%.1f\n",(s+i)->roll_no,(s+i)->fname,(s+i)->mname,(s+i)->lname,(s+i)->br,(s+i)->cgpa);
	printf("\n\n");
}
void asc(struct stu *s)
{
	printf("\nStudents in ascending order of CGPA\n");
	int i,temp,j,min,c;
	display();
	struct stu tmp;
	for(i=0;i<n;i++)
	{
		min=(s+i)->cgpa;
		c=i;
		for(j=i+1;j<n;j++)
		{
			if(min>(s+j)->cgpa)
			{
				c=j;
				min=(s+j)->cgpa;
			}
		}
		tmp=*(s+i);
		*(s+i)=*(s+c);
		*(s+c)=tmp;
		printf("%d\t%s %s %s\t%s\t%.1f\n",(s+i)->roll_no,(s+i)->fname,(s+i)->mname,(s+i)->lname,(s+i)->br,(s+i)->cgpa);
	}
}
void title(struct stu *s)
{
	int i;
	printf("\nEmployees having title mishra\n");
	display();
	for(i=0;i<n;i++)
		if(strcmp((s+i)->lname,"mishra")==0||strcmp((s+i)->lname,"Mishra")==0)
			printf("%d\t%s %s %s\t%s\t%.1f\n",(s+i)->roll_no,(s+i)->fname,(s+i)->mname,(s+i)->lname,(s+i)->br,(s+i)->cgpa);
}
main()
{
	struct stu *s;
	int i,j;
	printf("Enter the number of students: ");
       	scanf("%d",&n);	
	s=(struct stu*)calloc(n,sizeof(struct stu));
	for(i=0;i<n;i++)
	{
		printf("\nEnter the student name: ");
		scanf(" %s%s%s",(s+i)->fname,(s+i)->mname,(s+i)->lname);
		printf("Enter the student roll no: ");
		scanf("%d",&(s+i)->roll_no);
		printf("Enter the branch: ");
		scanf("%s",(s+i)->br);
		printf("Enter the cgpa: ");
	       	scanf("%f",&(s+i)->cgpa);	
	}
	cgpa(s);
	asc(s);
	title(s);
	printf("\n");
}
