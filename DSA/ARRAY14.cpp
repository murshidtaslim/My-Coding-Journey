#include<iostream>
using namespace std;
int main(){
	int arr[5]={5,2,7,3,1};
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
	return 0;
}