#include<stdio.h>
int maxn(int *p,int n)
{
	int max=*p,i;
	for(i=1;i<n;i++)
		if(max<*(p+i))
			max=*(p+i);
	return max;	
}
int minn(int *p,int n)
{
        int min=*p,i;
        for(i=1;i<n;i++)
                if(min>*(p+i))
                        min=*(p+i);
        return min;
}

main()
{
	int size,arr[20],i,*p;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Max: %d\nMin:%d\n",maxn(arr,size),minn(arr,size));
}
