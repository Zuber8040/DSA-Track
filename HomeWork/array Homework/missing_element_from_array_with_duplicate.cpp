/*
Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.
*/

#include<iostream>
#include<vector>

using namespace std;



int main(){


    vector<int>arr={4, 3, 6, 2, 1, 1};

    /*
    Method 1 : using Visted mark method 
    
    for(int i=0;i<arr.size();i++){
        int ind = abs(arr[i]);
        if(arr[ind-1] >0)
            arr[ind-1]*=-1;
    }

     there is only one element whose not -ve but and his index is missing in the array and +ve elemetn is also a duplicate

    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            cout<<"Duplicate element is "<<arr[i]<<"\n";
            cout<<"Missing element in array is "<<i+1;
       }
    }
    */

    /*
    Sorting+swapping method
    
    I will check that the index and value present at that index are same or not
    if its not same i will swap both value and increase the countter it will get swap 
    and i will iterate an array and check which value is not same as Index===value at the index 
    if its not same means the duplicate element is the value present at the index and missing index is the missing element in the array 
    
    int i=0;
    while(i<arr.size()){
        int ind = arr[i]-1;
        if(arr[ind]!=arr[i]){
            swap(arr[ind],arr[i]);
        }
        else i++;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=i+1){
            cout<<"Duplicate element is "<<arr[i]<<"\n";
            cout<<"Missing element in array is "<<i+1;
        }
    }

*/

}