#include<stdio.h>
main()
{
	int l,b,*area,*peri,ar,per;
	printf("Enter the length: ");	
	scanf("%d",&l);
	printf("Enter the breadth: ");
	scanf("%d",&b);
	ar=l*b;
	per=2*(l+b);
	area=&ar;
	peri=&per;
	printf("Area is: %d\nPerimeter is: %d\n",*area,*peri);
}
