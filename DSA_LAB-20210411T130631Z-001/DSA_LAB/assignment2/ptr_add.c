#include<stdio.h>
main()
{
	int ele,*p;
	printf("Enter the value: ");
	scanf("%d",&ele);
	p=&ele;
	printf("Value is: %d\nAdd. is: %p\n",*p,p);
}
