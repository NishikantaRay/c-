#include<stdio.h>
int add(int *,int);
main()
{
	int arr[10],*p,size,i;
	printf("Enter the array size: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	p=arr;
	for(i=0;i<size;i++)
		scanf("%d",(p+i));
	printf("Sum is:%d\n",add(arr,size));
}
int add(int *p,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
		sum+=*(p+i);
	return sum;
}
