#include<stdio.h>
struct book
{
	char aname[50],bname[50];
	int price,ed;
};
main()
{
	struct book arr[50];
	int n,i;
	printf("Enter the no. of books: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nBook %d\n",i+1);
		printf("-------\n");
		printf("Enter the book name: ");
		scanf(" %[^\n]s",arr[i].bname);
		printf("Enter the author name: ");
		scanf(" %[^\n]s",arr[i].aname);
		printf("Enter the price: ");
		scanf("%d",&arr[i].price);
		printf("Enter the edition: ");
		scanf("%d",&arr[i].ed);
	}	
	printf("\nBOOK NAME\t\tAUTHOR NAME\t\tPRICE\tEDITION\n");
	printf("---------\t\t-----------\t\t-----\t-------\n");
	for(i=0;i<n;i++)
		printf("%s\t\t%s\t%d\t%d\n",arr[i].bname,arr[i].aname,arr[i].price,arr[i].ed);
	printf("\n");
}
