#include<stdio.h>
int bsearch(int a[ ],int n,int ele)
{
	int l=0,u=n-1,mid;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(a[mid]==ele)
			return mid+1;
		else if(a[mid]<ele)
			l=mid+1;
		else 
			u=mid-1;
	}
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
	printf("The element is present at: %d\n",bsearch(arr,size,ele));
}
