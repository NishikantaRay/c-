#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,temp,i,j;
	printf("Enter the size: ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	printf("Enter the Array:\n");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	for(i=0;i<n;i++)
        {
            for(j=0;j<(n-1)-i;j++)
                if(*(p+j)>*(p+j+1))
                    {
                        temp=*(p+j);
                        *(p+j)=*(p+j+1);
                        *(p+j+1)=temp;
                    }
        }
	printf("Array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	printf("\n");
}
