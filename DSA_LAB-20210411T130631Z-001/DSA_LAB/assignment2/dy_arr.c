#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,sum=0,i;
	printf("Enter the size: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		sum+=*(p+i);
		printf("%d ",*(p+i));
	}
	printf("\nSum is: %d\n",sum);
}
