#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int>sort_array(n);
    for(int i=0;i<n;i++){
        cin>>sort_array[i];
    }
    // 2 methods sort kar le using sort function or write code
    

    //  i/p-> 1,1,1,0,0,0,
    //  o/p -> 0,0,0,1,1,1

    // start =0,end=n-1=5
    // new array is 
    // o/p 0,1,1,0,0,1
    // start =1 ,end = n-1=4
    // 



    int start=0,end=n-1;
    while(start<=end){
        if(sort_array[start]==1 && sort_array[end]==0){
            swap(sort_array[start],sort_array[end]);
            start++;
            end--;
        } 
        else if(sort_array[start]==0){
                start++;
        }
        else end--;
    }
    
    for(int i=0;i<n;i++){
        cout<<sort_array[i]<<" ";
    }

}