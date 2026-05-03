#include<iostream>
using namespace std;
bool check(int arr[],int size,int n,int m){
	int Days=1;
	int capacity=0;
	for(int i=0;i<size;i++){
		if(capacity+arr[i]<=m){
			capacity+=arr[i];
		}else{
			Days++;
			capacity=arr[i];
		}
	}
	if(Days<=n){
		return true;
	}else{
		return false;
	}
}
int main(){
	int arr[]={10,20,30,40,50,60};
	int size=sizeof(arr)/sizeof(arr[0]);
	int n=4;
	int result=-1;
	int start=0;
	int end=0;
	for(int k=0;k<size;k++){
		end+=arr[k];
		if(arr[k]>start){
			start=arr[k];
		}
	}
	while(start<=end){
		int mid=start+(end-start)/2;
	if(check(arr,size,n,mid)==true){
		result=mid;
		end=mid-1;
	}else{
		start=mid+1;
	}
}
cout<<n<<endl;
cout<<result;
	return 0;
}
