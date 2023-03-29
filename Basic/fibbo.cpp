#include<iostream>
using namespace std;

int main(){
    int t1,t2,next,n;
    t1=0;
    t2=1;
    next=t1+t2;
    cout<<"enter range";
    cin>>n;
    cout<<t1<<t2;
    for(int i=3;i<=n;i++){
        cout<<next;
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    
}