
/*
Find the missing number in an array

Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

Input Format: N = 5, array[] = {1,2,4,5}
Result: 3
*/


#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr={1,2,4,5};
    // int i=1;
    int flag =0;
    for(int i=1;i<=arr.size();i++){
        if(arr[i]==1){
            flag=1;
            break;
        }    
        
    }

}