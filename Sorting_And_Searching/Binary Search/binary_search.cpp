/*
What is Binary Search?
 - Binary Search is a Searching Algorithm and its optimized algo to searching as it take 
    O(LogN) time to search compare to linear search 

How O(LogN) comes?
- As a array size if N and We are iterating our array at N/2^k times where K means Iterating the array at K times means we are shrinking the size of array at K times and it shrink to max is 1 soo and we found that element 
    N/2^K = 1;
    N = 2^K
    Log2(N) = K;

    kTh itration it take times of Log2N 

How Binary Search is fast?

to use this Algo we have some condition:
    - Array element must be in monotonic order 
            monotonic means in increasing and decreasing order 

If this condition full fill we can apply this algo on Array 
steps :
        1) find start element i.e start = 0th index of arr
        2) find end element i.e end  = last index of arr = n-1 
        3) find mid element i.e mid = start+end/2 

after following this steps if you find start,end,mid then 
start comparing to the array 

First compare the arr[mid ]==target its equal to the target or not
if 
    it matches with target then return the answer 
else    
    find that where the target lies means compare with the if the target element lies in the 
    left side or right side of the array ? how my simply comparing with 
        if(arr[mid]<target)
            this means my target is in the left side of my array 
            so point my end pointer to  end = mid-1;
        else 
            this means my target is in the right side of my array 
            so point my start pointer to  start=mid+1; 
        
        this shrink the array and find help to find the element in faster way and we are searching the that area only 

Implementation : 

    pesudo code : 
            start = 0 // pointing to 0th index of array 
            end =  n-1 // pointing to last index of array 
            mid = start+(start+end)/2   //it handle the integer overflow and this is best practice too 

        while(start<=end){
            if(arr[mid]==targte)
                return target;
            else if(arr[mid]<target)
                end=mid-1;
            else 
                start=mid+1;
        }

*/


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>arr ={1,2,3,4,5,6};
    int target = 6;
    int ans = -1;

    int start=0,end=arr.size()-1;
        int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(target<arr[mid])
            end=mid-1;
        else {
            start=mid+1;
            mid=start+end/2;
        }
    }
    cout<<ans<<endl;

}