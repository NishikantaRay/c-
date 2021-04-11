//Nishikanta Ray
//sec-c2
//rollno-2
//sic-190410294
#include<stdio.h>  
void main ()  
{  
    int i,j, k,temp; 
    int a[15],n;
	printf(" Enter the range of the array");
	scanf("%d",&n);
	printf("\nEnter the number ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);   
    printf("\nprinting sorted elements...\n");  
    for(k=1; k<n; k++)   
    {  
        temp = a[k];  
        j= k-1;  
        while(j>=0 && temp <= a[j])  
        {  
            a[j+1] = a[j];   
            j = j-1;  
        }  
        a[j+1] = temp;  
    }  
    for(i=0;i<n;i++)  
    {  
        printf("\n%d\n",a[i]);  
    }  
}  
