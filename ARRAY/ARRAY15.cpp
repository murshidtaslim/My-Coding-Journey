#include<iostream>
using namespace std;
int main(){
	int arr[5]={6,5,7,4,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size-1;i++){
		int a=i;
		for(int k=i+1;k<size;k++){
			if(arr[k]<arr[a]){
				a=k;
			}
		}
		if(a!=i){
			int temp=arr[i];
			arr[i]=arr[a];
			arr[a]=temp;
		}
	}
		for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
	}
	return 0;
}