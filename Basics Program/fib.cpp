#include<iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==2)
    return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
    int a;
    cout<<"Enter a Number";
    cin>>a;
    for(int i=1;i<=a;i++){
        cout<<fib(i)<<" ";
    }
}