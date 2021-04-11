#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,ele,i,c=0;
	printf("Enter the size: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	printf("Enter the element: ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
        	if(*(p+i)==ele)
                {
					c++;
			break;
		}
	if(c!=0)
		printf("Element found at: %d position\n",i+1);
	else
		printf("Element not found\n");
}
