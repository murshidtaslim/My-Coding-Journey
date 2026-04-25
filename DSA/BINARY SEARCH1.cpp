#include<iostream>
using namespace std;
int main(){
	int arr[5]={5,3,4,7,5};
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
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int target=7;
	int start=0;
	int end=size-1;
	int result=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(target==arr[mid]){
			result=mid;
			break;
		}else if(target<arr[mid]){
			end=mid-1;
		}else{
		   start=mid+1;
        }
		}
	if(result!=-1){
		cout<<"At "<<result<<"th INDEX";
}else{
	cout<<"not found";
}
	return 0;
}
