#include<iostream>
#include<vector>

using namespace std;

int main(){

    //pair sum
    vector<int>arr{1,3,5,7,2,4,6};
    cout<<"Pairs are : "<<endl; 
    int sum = 10;
    for(int i=0;i<arr.size();i++){
        int ele = arr[i];
        for(int j=i+1;j<arr.size();j++){
                int ele_2 = arr[j];
                for(int k = j+1;k<arr.size();k++){
                    if(ele+ele_2+arr[k]==sum){
                        cout<<"("<<ele<<","<<ele_2<<","<<arr[k]<<")"<<endl;
                    }
                }            
        }       
    }
}