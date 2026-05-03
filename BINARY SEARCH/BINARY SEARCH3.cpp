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
	int target=1;
	int start=0;
	int end=size-1;
	bool found=false;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(target==arr[mid]){
		cout<<mid;
		found=true;
		break;
		}
		else if(target > arr[mid]){
			start=mid+1;
		}else{
			end=mid-1;
		}
    }
	if(!found){
		cout<<target<<" not found"<<endl;
		cout<<"insert position "<<start<<endl;
	}

	return 0;
}
