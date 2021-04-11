#include<stdio.h>
int merge(int c[ ],int a[ ],int b[ ],int n1,int n2)
{
	int i,j;
	for(i=0;i<n1;i++)
		c[i]=a[i];
	for(j=0;j<n2;j++,i++)
		c[i]=b[j];
}
void input(int a[ ],int size)
{
	int i;
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
}
main()
{
	int s1,s2,arr1[20],arr2[20],arr3[20],i;
	printf("Enter the size of 1st array: ");
	scanf("%d",&s1);
	printf("Enter the 1st array:\n");
	input(arr1,s1);
	printf("Enter the size of 2nd array: ");
	scanf("%d",&s2);
	printf("Enter the array:\n");
	input(arr2,s2);
	merge(arr3,arr1,arr2,s1,s2);
	printf("The merged array is:\n");
	for(i=0;i<s1+s2;i++)
		printf("%d ",arr3[i]);
	printf("\n");
}
