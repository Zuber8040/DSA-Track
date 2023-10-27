#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"Enter the Two numbers\n";
    cin>>a>>b;
    
    //  a = 10
    // b=20
    // a = 10+20 = 30

    // i want b = 10,a =20
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"A is "<<a<<endl;
    cout<<" B is "<<b<<endl; 
}