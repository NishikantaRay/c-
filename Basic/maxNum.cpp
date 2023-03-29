#include<iostream>
using namespace std;

int main(){
    int arr[]={23,4,211,2345,2,123,21,245};
    int max=arr[0];
    for(int i=0;i<8;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<max;

}