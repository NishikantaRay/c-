#include<stdio.h>
int lsearch(int a[ ],int n,int ele)
{
	int i;
	for(i=0;i<n;i++)
		if(a[i]==ele)
			return i+1;
}
main()
{
	int size,arr[20],i,ele;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element to be search: ");
	scanf("%d",&ele);
	printf("The element is present at: %d\n",lsearch(arr,size,ele));
}
