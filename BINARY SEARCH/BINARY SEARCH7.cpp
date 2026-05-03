#include<iostream>
using namespace std;
int findmin(int arr[],int size){
	int start=0;
	int end=size-1;
	while(start<end){
		int mid=start+(end-start)/2;
		if(arr[mid]>arr[end]){
			start=mid+1;
		}else{
			end=mid;
		}
	}
	return arr[start];
}
int main(){
	int arr[]={4,5,6,7,0,1,2,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	int min=findmin(arr,size);
	cout<<min;
	return 0;
}
