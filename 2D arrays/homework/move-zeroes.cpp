/*
Leetcode 283 - Moves Zeroes 

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]


*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
    // taking input from user
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j++]);
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}