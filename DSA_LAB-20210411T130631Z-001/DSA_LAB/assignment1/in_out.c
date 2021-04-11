#include<stdio.h>
int display(int *p,int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d ",*(p+i));
	printf(" ");
}
void input(int *p,int size)
{
	int i;
	for(i=0;i<size;i++)
                scanf("%d",p+i);
}
main()
{
	int size,arr[20],i;
	printf("Enter the size 1st array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	input(arr,size);
	printf("Array is:\n");
	display(arr,size);
}
