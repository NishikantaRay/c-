#include<stdio.h>
main()
{
	int a,b,*n1,*n2;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	n1=&a;
	n2=&b;
	printf("Addition is: %d\n",(*n1+*n2));
}
