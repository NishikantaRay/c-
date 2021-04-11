#include<stdio.h>
void insert(int a[ ],int *n,int ele,int l)
{
	int i;
	for(i=*n;i>l;i--)
		a[i]=a[i-1];
	a[l]=ele;
	(*n)++;
}
main()
{
	int size,arr[20],i,ele,loc;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element to be add: ");
	scanf("%d",&ele);
	printf("Enter the location: ");
	scanf("%d",&loc);
	insert(arr,&size,ele,loc-1);
	printf("New array is\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
