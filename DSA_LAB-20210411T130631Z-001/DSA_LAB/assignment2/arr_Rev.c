#include<stdio.h>
void rev(int *,int);
main()
{
	int arr[10],*p,size,i,temp;
	printf("Enter the array size: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	p=arr;
	for(i=0;i<size;i++)
		scanf("%d",(p+i));
	rev(arr,size);
	printf("Reverse is:\n");
	for(i=0;i<size;i++)
		printf("%d ",*(p+i));
	printf("\n");
}
void rev(int *p,int n)
{
	int sum=0,i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=*(p+i);
		*(p+i)=*(p+(n-1)-i);
		*(p+(n-1)-i)=temp;
	}
}
