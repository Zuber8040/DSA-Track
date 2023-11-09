// Search in 2D array 
#include<iostream>
using namespace std;



/*
    Here to mid element use this formula 
    
    end = n*m-1
    
    N=> No of rows
    M=> No of Columns

How to find INdex?

use this 

i,j=> C*i+j => with Help of this we can find in memory where it have stored

i = C*i+J

ROwIndex = Mid/Col
ColumnIndex = Mid%col
*/
int main(){

    int s = 0;
    int e = n*m-1;

    while(s<=e){

    int mid s+(e-s)/2;
    int ROwIndex = mid/M;
    int ColumnIndex = mid%M;

    int element = arr[ROwIndex][ColumnIndex];

        if(element==target)
        return true;
        else if(target>element)
            // right search 
            s=mid+1;
        else e=mid-1;
    }
}