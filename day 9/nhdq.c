#include<stdio.h>
#include<stdbool.h> 
#define NO_OF_CHARS 256 
char canFormPalindrome(int str[]) 
{ 
    int count[NO_OF_CHARS] = {0}; 
    int i;
    for ( i = 0;i<5;  i++) 
        count[str[i]]++; 
    int odd = 0; 
    for (i = 0; i < NO_OF_CHARS; i++) 
    { 
        if (count[i] & 1) 
            odd++; 
  
        if (odd > 1) 
            return false; 
    }   
    return true; 
} 
int main() 
{ 
  canFormPalindrome(21512)? printf("Yes\n"):  
                                     printf( "No\n"); 
  canFormPalindrome(21257)? printf("Yes\n"):  
                                    printf("No\n"); 
}
