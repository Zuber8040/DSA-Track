#include<iostream>
#include<vector>

using namespace std;
/*

1st approach is Linar Search => O(N)

2nd Approach is Binary Search => O(LogN)


I will compare this Below Array with Sorted Array 


Unsorted Array is => 10,3,40,20,50,80,70;

Sorted Array is => 3,10,20,40,50,80,70;

Here i can see that 3 can lie in the i-1,i,i+1



Comparing 2 algo 

1) Binary Search algo with sorted arr 

int s = 0,end=arr.size()-1;

while(s<=e){
    int mid = s+(s-e)/2;
    if(arr[mid]==target)
    return mid;
    else if(target>arr[mid])
        s =mid+1;
    else e=mid-1;
}


2) Binary Search with nearly sorted array

int s =0;
int e =arr.size()-1;

while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid] == target)
        return mid;
    else if(arr[mid-1]==target)
        return mid-1;
    else if(arr[mid+1]==target)
        return mid+1;
    else if(target>arr[mid])
        s=mid+2;
    else e=mid-2;   
}


*/
int NearlySortedArray(vector<int>arr,int target){
    
int s =0;
int e =arr.size()-1;

while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid] == target)
        return mid;
    else if( mid+1>=s && arr[mid-1]==target)
        return mid-1;
    else if(  mid+1<=e && arr[mid+1]==target)
        return mid+1;
    else if(target>arr[mid])
        s=mid+2;
    else e=mid-2;   
}
return -1;
}

int main(){
    vector<int>arr = {10,3,40,20,50,80,70};
    cout<<"Ans is "<<NearlySortedArray(arr,30);
}