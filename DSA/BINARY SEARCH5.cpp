#include<iostream>
using namespace std;
int fno(int arr[],int size,int k){
	int fresult=-1;
	int start=0;
	int end=size-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(k==arr[mid]){
			fresult=mid;
			end=mid-1;	
		}else if(k>arr[mid]){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return fresult;
}
int lno(int arr[],int size,int k){
	int lresult=-1;
	int start=0;
	int end=size-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(k==arr[mid]){
			lresult=mid;
			start=mid+1;	
		}else if(k>arr[mid]){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return lresult;
}
int main(){
	int arr[]={2,4,6,9,9,9,9,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int find=9;
	int f=fno(arr,size,find);
	int l=lno(arr,size,find);
	if(f!=-1){
		int total_no=(l-f)+1;
		cout<<"found "<<total_no<<" times";
	}else{
		cout<<"!found";
	}
	return 0;
}
