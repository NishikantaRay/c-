#include<stdio.h>
struct comp1
{
	int real,imag;
};
void input(struct comp1 *);
void display(struct comp1);
struct comp1 add(struct comp1,struct comp1);
struct comp1 sub(struct comp1,struct comp1);
struct comp1 mul(struct comp1,struct comp1);
main()
{
	struct comp1 n1,n2,n3;
	printf("Enter your 1st complex no.:\n");
	input(&n1);
	printf("Enter your 2nd complex no.:\n");
	input(&n2);
	n3=add(n1,n2);
	printf("Addition is: ");
	display(n3);
	n3=sub(n1,n2);
        printf("Subtraction is: ");
        display(n3);
	n3=mul(n1,n2);
        printf("Multiplication is: ");
        display(n3);
}
void input(struct comp1 *n)
{
	printf("\tReal: ");
	scanf("%d",&n->real);
	printf("\tImaginary: ");
	scanf("%d",&n->imag);
}
void display(struct comp1 n)
{
	char c='+';
	if(n.imag<0)
	{
		c='-';
		n.imag*=(-1);
	}
	printf("%d%c%di\n",n.real,c,n.imag);
}
struct comp1 add(struct comp1 n1,struct comp1 n2)
{
	struct comp1 n;
	n.real=n1.real+n2.real;
	n.imag=n1.imag+n2.imag;
	return n;
}
struct comp1 sub(struct comp1 n1,struct comp1 n2)
{
        struct comp1 n;
        n.real=n1.real-n2.real;
        n.imag=n1.imag-n2.imag;
        return n;
}
struct comp1 mul(struct comp1 n1,struct comp1 n2)
{
        struct comp1 n;
        n.real=(n1.real*n2.real)+(-1)*(n1.imag*n2.imag);
        n.imag=(n1.real*n2.imag)+(n1.imag*n2.real);
        return n;
}
