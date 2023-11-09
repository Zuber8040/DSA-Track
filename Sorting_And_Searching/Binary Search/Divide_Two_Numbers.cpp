#include<iostream>
using namespace std;
/*
Divide by 2 number using Binary Search 

dividend= 10,
divisor = 2,

ANs lie in tha range of 0-10
quotient *divisor +rem = dividend;

chota kr raha hu 

quotuent*divisior<=dividend

quotient == mid 



*/

int Divide(int dividend,int divisior){

    int s = 0;
    int e=dividend;
    int ans=-1;
    while(s<=e){
        
        // mid is my quotient
        int mid = s+(e-s)/2;

        if( abs(mid*divisior)==abs(dividend)){
            ans=mid;
            break;
        }
        else if(abs(mid*divisior) < abs(dividend)){
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
    }

/*
Handling for negative numberss

-/- = +
*/
    if((dividend<0 && divisior>0) || (dividend>0&& divisior>0) )
        return ans;

    return -ans;
}

int main(){
 
    cout<<"Ans is"<<Divide(-22,-7);   
}