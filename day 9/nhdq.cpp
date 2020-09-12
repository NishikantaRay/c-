#include<stdio.h>
#include<stdbool.h> 
#define NO_OF_CHARS 256 
char canFormPalindrome(int str[]) 
{ 
    int count[NO_OF_CHARS] = {0}; 
    for (int i = 0; str[i];  i++) 
        count[str[i]]++; 
    int odd = 0; 
    for (int i = 0; i < NO_OF_CHARS; i++) 
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
  canFormPalindrome(2125)? printf("Yes\n"):  
                                    printf("No\n"); 
}
