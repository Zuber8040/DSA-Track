/*
LC -> 287 => find-the-duplicate-number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

TC: O(N);
SC : O(1);
Input: nums = [1,3,4,2,2]
Output: 2

Input: nums = [3,1,3,4,2]
Output: 3



*/

#include<iostream>
#include<vector>
using namespace std;


/*
I have 3 methods in my mind that is 
1) using 2 for loops comparing every that is present or not in entire array
2) XOR method if same number have XOR == 0 then its duplicate
3) MAP using Unordered Map or MAP 
4) Sort the array and travese it 

I will use all method 

*/
int main(){
    vector<int>arr = {1,3,4,2,2};
    // vector<int>arr = {3,1,3,4,2};
    // 2 for loop methods

    /* for(int i =0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
             if(arr[i]==arr[j])
                cout<<"Duplicate element is "<<arr[i]<<" ";
         }
     }
     */

    // XOR method

    /*
    int xor=0;
    int i=0,j=i+1;
    while(i<arr.size()){
        xor = xor ^ arr[i];
        if(xor==0){
            cout<<"Duplicate element is "<<arr[i]<<" ";
           break;
        }
        else {
            i++;
            j=j+1;
        }
    }
    */

}   