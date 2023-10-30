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
5) Visted Mark using INdex
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

/*
Sort method:


    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(num[i]==nums[i+1]){
            cout<<"Dupliate number is"<<nums[i]<<" ";
            break;
        }

    }
*/

/*
Visted marking : 

    In this i will mark the index as visted as 
    array is from 1 to N 
        N => Size of array 
    for example : N=4
    that means in array all elements are from 1 to 4 == [1,2,2,4];
    here 2 is the repating ele then if mark this index as -ve then and and that index again found negative means its duplicate elese i will mark as its negative 
*/

for(int i=0;i<nums.size();i++){
    int index = abs(nums[i]);
    // already visted
    if(index<0){
        cout<<"Duplicate number is"<<index<<" ";
        break;
    }
    // marking negative
    nums[index]*=-1;

}

}   

