#include<stdio.h>
int search(int a[ ],int n,int ele)
{
        int i;
        for(i=0;i<n;i++)
                if(a[i]==ele)
                        return i;
}

void swap(int a[ ],int n,int n1,int n2)
{
	int i1,i2;
	i1=search(a,n,n1);
	i2=search(a,n,n2);
	a[i1]+=a[i2];
	a[i2]=a[i1]-a[i2];
	a[i1]-=a[i2];
}
main()
{
	int size,arr[20],i,ele1,ele2;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter the 1st element: ");
	scanf("%d",&ele1);
	printf("Enter the 2nd element: ");
	scanf("%d",&ele2);
	swap(arr,size,ele1,ele2);
	printf("After swapping:\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
