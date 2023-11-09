#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(vector<int>arr){
	int s = 0;
	int e = arr.size()-1;
	
	int ans=-1;

	while(s<=e){
		int mid = s+(e-s)/2;
		if(arr[mid]!=mid+1 && arr[mid-1]==mid)
				return mid+1;
		else if(arr[mid]!=mid+1)
		// search on left
	e=mid-1;
		else s=mid+1;
	}
	return -1;
}
int main(){
	vector<int>arr={1,2,3,3,4,5};
	cout<<findMissingNumber(arr)<<endl;

}
