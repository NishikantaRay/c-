#include<stdio.h>
main()
{
	int num,fact=1,*p,i;
	printf("Enter the number: ");
	scanf("%d",&num);
	p=&num;
	for(i=1;i<=*p;i++)
		fact=fact*i;
	printf("Factorial is: %d\n",fact);
}
