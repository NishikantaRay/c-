#include<stdio.h>
main()
{
	int arr[10],*p,size,i;
	printf("Enter the array size: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	p=arr;
	for(i=0;i<size;i++)
		scanf("%d",(p+i));
	printf("The array is:\n");
	for(i=0;i<size;i++)
		printf("%d ",*(p+i));
	printf("\n");
	for(i=0;i<size;i++)
		printf("%p ",(p+i));
	printf("\n");
}
