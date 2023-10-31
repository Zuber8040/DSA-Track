/*
return the index of first occurence of element in the array

arr = {1,5,3,4,3,5,6};
o/p =>2 (5 occur first and its index is 2)

*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){
    vector<int>arr ={1,5,3,4,3,5,6};
    /* Method 1 : using 2 for loops    
    int flag=0;

    for(int i=0;i<arr.size();i++){    
        for(int j=i+1;j<arr.size();i++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
    if(flag==1){
        cout<<i+1<<" ";
        break;
        }
    }
    */


    /* Method 2 : Hashing method

    I will hash every element using hashing it store its key value pair and count of time the element occur in the array 
    1->1
    5->2
    3->2
    4->1
    6->1

    and return the first element according to element at array and if his occurence is >1 then return the index of that array

    unordered_map<int,int>hash;
    for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;           
    }

    for(int i=0;i<arr.size();i++){
        if(hash[arr[i]]>1)
        {
            cout<<i+1<<" ";
            break;
        }
    }

    */
}