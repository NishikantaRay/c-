#include <iostream>
#include <cmath> 
using namespace std;  
int reverse(int num) 
{ 
    int rev = 0; 
    while (num > 0) 
    { 
        rev = rev * 10 + num % 10; 
        num /= 10; 
    } 
    return rev; 
} 
int main() 
{ 
    int i;
    for(i=10;i<1000;i++)
    {
		int a = i*i; 
    	int b = (reverse(i));
    	int x=b*b;
		int z= reverse(x);
    	if (a ==z )  
	    cout<<i<<"\t";    
 	}
    return 0; 
} 
