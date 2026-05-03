#include<iostream>
using namespace std;
int main(){
	int arr[]={9,8,2,5,3,3,3,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size-1;i++){
		for(int k=0;k<size-i-1;k++){
			if(arr[k]>arr[k+1]){
				int temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	}
	int target=3;
	int start=0;
	int end=size-1;
	int fresult=-1;
	int lresult=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(target==arr[mid]){
			fresult=mid;
			end=mid-1;
		}else if(target<arr[mid]){
			end=mid-1;
		}else{
		   start=mid+1;
        }
		}
		start=0;
		end=size-1;
		while(start<=end){
		int mid=start+(end-start)/2;
		if(target==arr[mid]){
			lresult=mid;
			start=mid+1;
		}else if(target<arr[mid]){
			end=mid-1;
		}else{
		   start=mid+1;
        }
		}
		if(fresult!=-1){
			cout<<"first index "<<fresult<<endl;
			cout<<"last index "<<lresult;
		}else{
			cout<<"not found";
		}
		return 0;
	}
