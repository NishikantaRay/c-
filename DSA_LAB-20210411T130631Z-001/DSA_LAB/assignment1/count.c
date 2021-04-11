#include<stdio.h>
int count(int a[ ],int n,int ele)
{
	int i,c=0;
	for(i=0;i<n;i++)
		if(a[i]==ele)
			c++;
	return c;
}
main()
{
	int size,arr[20],i,ele;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element to check its occurance: ");
	scanf("%d",&ele);
	printf("The element is occur %d times\n",count(arr,size,ele));
}
