#include<stdio.h>
int loc(int *,int,int);
main()
{
	int arr[10],*p,size,i,ele;
	printf("Enter the array size: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	p=arr;
	for(i=0;i<size;i++)
		scanf("%d",(p+i));
	printf("Enter the element: ");
	scanf("%d",&ele);
	printf("Element found at: %d\n",loc(arr,size,ele));
}
int loc(int *p,int n,int ele)
{
	int i;
	for(i=0;i<n;i++)
		if(*(p+i)==ele)
			return i+1;
}
