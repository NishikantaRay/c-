#include<iostream>

using namespace std;

void swap(int *x,int *y){
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main(){
    int x=100;
    int y=300;
    swap(&x,&y);
    cout<<x<<y;
}