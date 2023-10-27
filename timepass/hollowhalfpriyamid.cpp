#include<iostream>
#include<vector>
using namespace std;

int main(){
    //  vector intitizae
    // dynamic array haii 
    // intitale sab value 0 hote haii agar koi insert nhi kiya toh 
    // vector<int>arr;
    // sare valyes mein  10 daalne ho toh 
    vector<int>arr(10,10);
    // elements 10 uske andar 10 gaya as value 
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    // cout<<endl;
    // size=> no of elem present in array 
    // empty => check array is empty or not 
    // capacity => how much we can store in the array 
    // cout<<arr.capacity()<<endl;
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr.size();
    
    // remove the right most  last element in array 
    // unqiue element nikalna hai tih 

    // XOR use arna haii 
    //  ans = ans^arr[i];
    
    // UNION => COMBINE single single for loop 
    // INTERSECTION => 2 for loop inside one another & double nhi hona hai toh counter replace kar de -1 taaki fisre woh count naa karee 


}