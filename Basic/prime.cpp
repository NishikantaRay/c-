#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=10;i++){
        int temp=0;
        for(int j=1;j<=i;j++){
            
            if(i%j==0){
                temp+=1;
            }
        }
        if(temp==2)
            cout<<i<<" \t";
    }
}