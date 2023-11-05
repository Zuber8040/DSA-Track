
#include<iostream>
#include<vector>

using namespace std;
int findMissing(vector<int>arr){
    int ans = -1;
    int s =0;
    int e=arr.size()-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]!=mid+1 && arr[mid-1]==mid) 
            return mid+1;
        else if(arr[mid]!=mid+1){
            // sarch on right
            e=mid-1;

        }  
        else s=mid+1;    
    }

}

int main(){
        vector<int>arr={1,2,3,5,6,7};
        cout<<findMissing(arr);

}