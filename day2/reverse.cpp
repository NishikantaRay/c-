#include <bits/stdc++.h> 
using namespace std;  
void reverse(string str) 
{ 
   for (int i=str.length()-1; i>=0; i--) 
      cout << str[i];  
}  
int main(void) 
{ 
    string s ;
    cout<<" Enter the string\n ";
    getline(cin,s);
    cout<<" Reverse string is \t";
    reverse(s); 
    return (0); 
} 
