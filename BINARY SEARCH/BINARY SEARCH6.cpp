#include<iostream>
using namespace std;
int peaksearch(int arr[],int size){
	int start=0,end=size-1;
	while(start<end){
		int mid=start+(end-start)/2;
		if(arr[mid]<arr[mid+1]){
			start=mid+1;
		}else{
			end=mid;
		}
	}
	return start;
}
int main(){
int arr[]={2,3,4,5,7,9,7};
int size=sizeof(arr)/sizeof(arr[0]);
int search=peaksearch(arr,size);
cout<<arr[search]<<endl;
cout<<search<<endl;

return 0;
}
