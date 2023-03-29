#include<iostream>
using namespace std;

int main(){
    int n;
    double sum=0;
    cin>>n;
    for(int i=0;i<3;i++){
        sum=sum+n%10;
        n=n/10;
    }
    cout<<sum;
}