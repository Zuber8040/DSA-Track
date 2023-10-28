/*
https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr ={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            swap(arr[i],arr[j++]);
        }
    }

 for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}