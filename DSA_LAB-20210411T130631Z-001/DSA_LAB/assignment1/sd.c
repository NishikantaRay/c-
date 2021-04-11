#include<stdio.h>
#include<math.h>
int sumn(int [ ],int);
float sd(int [ ],int);
main()
{
	int size,arr[20],i;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Standard deviation is: %.2f\n",sd(arr,size));
}
int sumn(int a[ ],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	return sum;

}
float sd(int a[ ],int n)
{
	float m,b[20],sum=0;
	int i;
	m=(float)sumn(a,n)/(float)n;
	for(i=0;i<n;i++)
		sum=sum+(a[i]-m)*(a[i]-m);	
	return sqrt(sum/n);
}
