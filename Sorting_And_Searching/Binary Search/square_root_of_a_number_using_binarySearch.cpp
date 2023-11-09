#include<iostream>
using namespace std;

int SquareRooot(int target){
	int s=0;
	int e = target;
	int ans=-1;
	while(s<=e){
		int mid = s+(e-s)/2;
		if((mid*mid) == target){
			ans=mid;
			break;
		}
		if((mid*mid)<target)
		{
			ans=mid;
			s=mid+1;
		}	
		else{
		       	e =mid-1;
		  }	
	}
return ans;
}

int main(){
    cout<<"Root is"<<SquareRooot(11);
}
