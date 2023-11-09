#include<iostream>
#include<vector>
using namespace std;

int PeakElementIs(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(arr[mid]<arr[mid+1])
        //search of right 
        s=mid+1;
    else e=mid;
    }
    return s;
}
int main(){
    vector<int>arr={0,1,8,2};
    cout<<PeakElementIs(arr);
}