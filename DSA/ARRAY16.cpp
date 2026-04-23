#include<iostream>
using namespace std;
int main(){
	int arr[5]={3,5,4,2,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<size;i++){
		int a=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>a){
			arr[j+1]=arr[j];
			j=j-1;
}
		arr[j+1]=a;
}
		for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
	return 0;
}