#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(col==0 ||  row==0){
                cout<<"*";
            }
            else if((row==1 && col==n-1) || (row==2 && col==n-2)  || (row==2 && col==n-3)        )
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}