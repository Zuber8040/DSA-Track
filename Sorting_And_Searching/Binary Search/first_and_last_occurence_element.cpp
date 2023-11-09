/*
First and last occurence of element in the monotonic array 

*/
#include<iostream>
#include<vector>
using namespace std;

int first_occurence(vector<int>v,int target){
    int s = 0;
    int e = v.size()-1;
    // if element not found
    int ans=-1;   
    while(s<=e){
        // finding mid element 
        int mid = s+(e-s)/2;
        if(v[mid]==target){
        // store the index and search on left side
            ans=mid;
            e=mid-1;
        }
        else if(target>v[mid])
            s=mid+1;
        else e = mid-1;
    }   
    return ans;
}

int main(){
    vector<int>v = {1,3,3,3,3,3,3,4,4,4,4,4,6,7,9};
    int target=4;
    cout<<"Ans is "<<first_occurence(v,target);
}


/*
Homework 
    1)find pivot using binary search
    2)search in roated and sorted array
    3) squareRoot using BInary Search
    4) Peak element in mountain array
      
*/