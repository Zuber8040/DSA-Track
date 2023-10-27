#include<iostream>
#include<vector>

using namespace std;
// i have to sort this array 
// brute force is => make a 3rd array and insert 0 first then insert 1's 
// 2 for loops are required 

int main(){
    vector<int>arr = {1,0,1,0,1,0,1,1,0};
    
    int start= 0,end=arr.size()-1;

    while(start<=end){
        if(arr[start]==0 && arr[end]==1 ){
                
        }
    }

    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<" ";
    }
}