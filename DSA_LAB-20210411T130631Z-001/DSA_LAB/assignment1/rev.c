#include<stdio.h>
void rev(int a[ ],int n)
{
	int i,temp;
	n--;
	for(i=0;i<=n/2;i++)
	{
		temp=a[n-i];
		a[n-i]=a[i];
		a[i]=temp;
	}
}
main()
{
	int size,arr[20],i;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	rev(arr,size);
	printf("After reversing:\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
