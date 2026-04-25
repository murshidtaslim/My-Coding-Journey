#include<iostream>
using namespace std;
int kthno(int arr[],int size,int target){
	int start=0;
	int end=size-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		int mising=arr[mid]-(mid+1);
		if(mising < target){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return start+target;
}
int main(){
	int arr[]={2,6,8,10,12,14};
	int size=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	int result=kthno(arr,size,k);
	cout<<result;
	return 0;
}
