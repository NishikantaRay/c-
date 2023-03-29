#include<iostream>
using namespace std;

int main(){
    int n;
    double sum=0;
    cout<<"enter the length";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0)
            sum+=i;
    }
    cout<<"Even sum is "<<sum;
}