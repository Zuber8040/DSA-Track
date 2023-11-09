/*
find the odd occuring element  

1) Linear search => O(N)
2) XOR => XOR all and 0^3 == 3
3) Map 
4) Binary Search => O(LogN)
5) Sort and iterare => O(NlogN)

Below is Binary Search Method
*/

#include<iostream>
#include<vector>

using namespace std;

int Solve(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(s==e){
        //single element
            return s;
        }

        if(mid%2==0){
            if(arr[mid]==arr[mid+1])
            // right mein search karo   
                s=mid+2;
            else e=mid;
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else e = mid-1;
        }   
    }
    return -1;
}

int main(){
vector<int>arr={1,1,2,2,3,3,4,4,3,600,600,4,4};
int ans = Solve(arr);
cout<<"Index is"<<" "<<ans <<"\n"<<"Value is "<<arr[ans];

}