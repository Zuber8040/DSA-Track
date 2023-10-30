/*
leetcode 75 - 

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Input: nums = [2,0,1]
Output: [0,1,2]
 

*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector<int>nums={2,0,2,1,1,0};
    vector<int>nums={1,2,2,2,0,0};

    int n=nums.size();

/*
    counting method => 
    
        
     int cnt_o=0,cnt_one=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0)
                cnt_o++;
            else if(nums[i]==1)
                cnt_one++;
        }
        for(int i=0;i<n;i++){
            if(cnt_o!=0){
               nums[i]=0;
                cnt_o--;
            }
            else if(cnt_one!=0){
               
               nums[i]=1;
                cnt_one--;
            }
               
            else nums[i]=2; 
        }
*/


/* 
3 pointer apprach 
s=> Track the place of zero and then replace with 0
m=> Track whethere its 0,1,2
e => Track of 2's

*/
   int s=0,m=0,e=n-1;
   while(m<=e){
        if(nums[m]==0){
            swap(nums[s],nums[m]);
            s++;
            m++;
        }
        else if(nums[m]==1)
            m++;
        else{
                swap(nums[m],nums[e]);
                e--;
        } 
        

   }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}