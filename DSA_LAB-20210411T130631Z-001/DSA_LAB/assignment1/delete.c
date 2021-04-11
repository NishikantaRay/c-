#include<stdio.h>
int search(int a[ ],int n,int ele)
{
        int i;
        for(i=0;i<n;i++)
                if(a[i]==ele)
                        return i;
}

void delete(int a[ ],int *n,int ele)
{
	int i,loc;
	loc=search(a,*n,ele);
	for(i=loc;i<*n-1;i++)
		a[i]=a[i+1];
	a[i]=0;
	(*n)--;
}
main()
{
	int size,arr[20],i,ele;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element to be delete: ");
	scanf("%d",&ele);
	delete(arr,&size,ele);
	printf("New array is\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
