#include<stdio.h>
void add(int a[ ],int n)
{
	int i;
	for(i=0;i<n;i++)
		a[i]+=10;
}
main()
{
	int size,arr[20],i;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	add(arr,size);
	printf("New array is:\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
