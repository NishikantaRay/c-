#include<stdio.h>
int sumn(int a[ ],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum;	
}
float avgn(int a[ ],int n)
{
        float avg;
	avg=(float)sumn(a,n)/n;
        return avg;
}

main()
{
	int size,arr[20],i;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Sum: %d\nAvg:%.2f\n",sumn(arr,size),avgn(arr,size));
}
